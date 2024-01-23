/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:40:36 by lamici            #+#    #+#             */
/*   Updated: 2023/10/24 13:55:29 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(void)
{
	;
}

Base *generate(void)
{
	int	i;

	srand(static_cast <unsigned int> (time(NULL)));
	i = rand() % 3;
	switch (i)
	{
		case 0:
			return(new A);
		case 1:
			return(new B);
		default:
			return(new C);
	}
}

void identify(Base* p)
{
	if (dynamic_cast <A*> (p))
		std::cout << "type is A" << std::endl;
	else if (dynamic_cast <B*> (p))
		std::cout << "type is B" << std::endl;
	else if (dynamic_cast <C*> (p))
		std::cout << "type is C" << std::endl;
	else
		std::cout << "Generic base pointer" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A& type = dynamic_cast <A&> (p);
		std::cout << "type is A" << std::endl;
		static_cast <void> (type);
	}
	catch (std::exception){}
	try
	{
		B& type = dynamic_cast <B&> (p);
		std::cout << "type is B" << std::endl;
		static_cast <void> (type);
	}
	catch (std::exception){}
	try
	{
		C& type = dynamic_cast <C&> (p);
		std::cout << "type is C" << std::endl;
		static_cast <void> (type);
	}
	catch (std::exception){}
}