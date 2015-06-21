/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguarda <lguarda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/14 13:43:08 by lguarda           #+#    #+#             */
/*   Updated: 2015/04/15 18:55:08 by lguarda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
class Base {public:virtual ~Base(){}};
class A : public Base {public: virtual ~A(){}};
class B : public Base {public: virtual ~B(){}};
class C : public Base {public: virtual ~C(){}};

Base	*generate(void)
{
	Base	*v;
	int		i = std::rand() % 3;
	switch(i)
	{
		case 0:v = static_cast<Base*>(new A);break;
		case 1:v = static_cast<Base*>(new B);break;
		case 2:v = static_cast<Base*>(new C);break;
		default: v = static_cast<Base*>(new A);break;
	}
	return v;
}

void	identify_from_pointer(Base * p)
{
	A  *a = dynamic_cast<A*>(p);
	B  *b = dynamic_cast<B*>(p);
	C  *c = dynamic_cast<C*>(p);
	if (a)
		std::cout << "A";
	else if (b)
		std::cout << "B";
	else if (c)
		std::cout << "C";
	else
		std::cout << "NULL";
	std::cout << std::endl;
}
void	identify_from_reference(Base &p)
{
	A  *a = dynamic_cast<A*>(&p);
	B  *b = dynamic_cast<B*>(&p);
	C  *c = dynamic_cast<C*>(&p);
	if (a)
		std::cout << "A";
	else if (b)
		std::cout << "B";
	else if (c)
		std::cout << "C";
	else
		std::cout << "NULL";
	std::cout << std::endl;
}

int	main()
{
	Base	*b;

	std::srand(static_cast<unsigned int>(std::time(0)));
	b = generate();
	identify_from_pointer(b);
	identify_from_reference(*b);
	delete b;
	return 0;
}
