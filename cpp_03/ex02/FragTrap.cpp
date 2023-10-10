/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:17:05 by lamici            #+#    #+#             */
/*   Updated: 2023/09/27 10:45:59 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	attackDamage = 30;
	hitPoints = 100;
	energyPoints = 100;
	std::cout << "standard FragTrap constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	attackDamage = 20;
	hitPoints = 100;
	energyPoints = 50;
	std::cout << "string FragTrap constructor called" << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "standard FragTrap destructor called" << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=(FragTrap const &copy)
{	
	if(this != &copy)
	{
		this->name = copy.name;
		this->attackDamage = copy.attackDamage;
		this->hitPoints = copy.hitPoints;
		this->energyPoints = copy.energyPoints;
	}
	return (*this);
}

FragTrap::FragTrap(const FragTrap &copy)
{
	*this = copy;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "high five?" << std::endl;
}