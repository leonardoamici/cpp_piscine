/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:45:46 by lamici            #+#    #+#             */
/*   Updated: 2023/09/27 10:40:05 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	attackDamage = 20;
	hitPoints = 100;
	energyPoints = 50;
	std::cout << "standard ScavTrap constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	attackDamage = 20;
	hitPoints = 100;
	energyPoints = 50;
	std::cout << "string ScavTrap constructor called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "standard ScavTrap destructor called" << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &copy)
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

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	*this = copy;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in gate guarding mode" << std::endl;
}