/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/11 22:07:31 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/12 11:58:03 by lguarda          ###   ########.fr       */
/*   Updated: 2015/04/12 03:38:02 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_HPP
# define GAME_HPP

#include "Defines.hpp"
#include "Enemy.hpp"
#include "Player.hpp"
#include <iostream>
#include <signal.h>
#include <sys/ioctl.h>

class Game
{
public:
	~Game(void);
	Game(void);
	Game(Game const & game);
	Game&operator=(Game const & game);
	void		gameLoop();
	int			refreshGame();
	void		checkCollision();
	void		initGame();
	int			checkGameState();
	void		DrawStar();
	void		initColors();
	static int	getWidth();
	static int	getHeight();
	static int	key;
private:
	void	init_ncurse(int mode);
	Enemy	enemies[NBE];
	Player	player;
	Missile		*etoile;
	int			nbEtoile;
	static int		_Height;
	static int		_Width;
};

#endif
