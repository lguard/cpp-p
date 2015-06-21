/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 22:10:14 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/18 16:36:33 by lguarda          ###   ########.fr       */
/*   Updated: 2015/04/12 07:36:07 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.hpp"
#include <ncurses.h>

int		Game::_Height = 0;

int		Game::_Width = 0;
int		Game::key = 0;

Game::~Game(void) {}

Game::Game(void) {}

Game::Game(Game const & game) { *this = game; }

Game& Game::operator=(Game const & game)
{
	(void)game;
	return *this;
}

int		Game::getWidth() {return Game::_Width;}
int		Game::getHeight() {return Game::_Height;}

void	Game::init_ncurse(int mode)
{
	if (mode)
	{
		initscr();
		noecho();
		curs_set(0);
		keypad(stdscr, TRUE);
		nodelay(stdscr, TRUE);
		getmaxyx(stdscr, Game::_Height, Game::_Width);
		std::srand(std::time(0));
		initColors();
	}
	else
		endwin();
}

void	Game::DrawStar()
{
	for (int i = 0; i < this->nbEtoile; i++)
		if (!this->etoile[i].isAlive()) 
			this->etoile[i].setAll((std::rand() % (Game::_Width)), 0, 1, 5000, '*', 3);
	for (int i = 0; i < this->nbEtoile; i++)
		this->etoile[i].update();
	for (int i = 0; i < this->nbEtoile; i++)
		this->etoile[i].draw();
}

int		Game::refreshGame()
{
	Game::key = wgetch(stdscr);

	DrawStar();
	this->player.update();
	for(int i = 0; i < 10; i++)
		this->enemies[i].update();
	this->player.draw();
	for(int i = 0; i < 10; i++)
		this->enemies[i].draw();
	refresh();
	checkCollision();
	if (Game::key == 27 || Game::key == KEY_RESIZE)
		return 0;
	checkCollision();
	return checkGameState();
}

void	Game::checkCollision()
{
	Missile		*enemiesM;
	Missile		*playerM;

	playerM = this->player.getMissiles();
	for(int i = 0; i < NBE; ++i)
	{
		enemiesM = enemies[i].getMissiles();
		if (this->player.collide(this->enemies[i]))
			this->player.takeDamage(3);
		for(int j = 0; j < NBM; ++j)
		{
			if (this->enemies[i].collide(playerM[j]))
				this->enemies[i].takeDamage(3);
		}
		for(int j = 0; j < NBE; ++j)
		{
			if (this->enemies[j].collide(*enemiesM))
				this->enemies[j].takeDamage(3);
		}
	}
	for (int i = 0; i < this->nbEtoile; ++i)
	{
		if (this->player.collide(this->etoile[i]))
			this->player.takeDamage(3);
	}
}

int		Game::checkGameState()
{
	int		j = 0;
	while(j < NBE)
	{
		if (this->enemies[j].isAlive())
			break ;
		j++;
	}
	if (!this->player.isAlive())
		return 2;
	if (j == NBE)
		return 3;
	return 1;
}

void	Game::gameLoop()
{
	int		ret;

	init_ncurse(1);
	initGame();
	while ((ret = refreshGame()) == 1);
	clear();
	if (ret == 2)
		attron(COLOR_PAIR(3)), mvprintw((Game::_Height / 2), (Game::_Width / 2) - 5, "* You Lost *");
	if (ret == 3)
		attron(COLOR_PAIR(1)), mvprintw((Game::_Height / 2), (Game::_Width / 2) - 4, "* You Won *");
	nodelay(stdscr, FALSE);
	ret = getch();
	while (ret == LEFT || ret == RIGHT || ret == UP || ret == DOWN || ret == SHOOT)
		ret = getch();
	init_ncurse(0);
}

void	Game::initGame()
{
	this->nbEtoile = (Game::_Width * Game::_Height) / 1000;
	this->etoile = new Missile[this->nbEtoile];
	for (int i = 0; i < this->nbEtoile; i++)
		this->etoile[i].setAll((std::rand() % (Game::_Width)),
		(std::rand() % (Game::_Height)), 1, 5000, '*', 3), this->etoile[i].setDir(DIR_DOWN);
	for(int i = 0; i < NBM; i++)
		this->enemies[i].setAll((std::rand() % (Game::_Width)),
		(std::rand() % (Game::_Height / 2)), 1, 10000, 'o', 2);
	this->player.setAll((Game::_Width / 2), (Game::_Height * 0.8), 3, 0, '^', 1);
}

void		Game::initColors(void)
{
	start_color();
	init_color(8, 340, 340, 340);
	init_color(9, 0, 102*3.9, 255*3.9);
	init_color(10, 230*3.9, 90*3.9, 51*3.9);
	init_color(11, 1000, 1000, 0);
	init_pair(1, 9, COLOR_BLACK);
	init_pair(2, 8, COLOR_BLACK);
	init_pair(3, 10, COLOR_BLACK);
	init_pair(4, 11, COLOR_BLACK);
	init_pair(5, COLOR_BLACK, COLOR_BLACK);
}
