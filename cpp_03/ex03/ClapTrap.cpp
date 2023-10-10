/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 14:35:56 by lamici            #+#    #+#             */
/*   Updated: 2023/09/27 10:59:11 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "standard ClapTrap constructor called" << std::endl;
	this->name = "";
	this->attackDamage = 0;
	this->energyPoints = 10;
	this->hitPoints = 10;
}

ClapTrap::ClapTrap(std::string newName)
{
	std::cout << "string ClapTrap constructor called" << std::endl;
	this->name = newName;
	this->attackDamage = 0;
	this->energyPoints = 10;
	this->hitPoints = 10;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "standard ClapTrap destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &copy)
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

void	ClapTrap::attack(const std::string& target)
{
	if(this->hitPoints <= 0)
		std::cout << this->name << " is dead and can't attack!" << std::endl;
	else if(this->energyPoints <= 0)
		std::cout << this->name << " is out of energy and can't attack!" << std::endl;
	else
	{
		this->energyPoints--;
		std::cout << this->name << " hit " << target << " for " << this->attackDamage << " damage" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if(this->hitPoints <= 0)
	{
		std::cout << this->name << " is already dead!" << std::endl;
		return ;
	}
	this->hitPoints -= amount;
	if(this->hitPoints <= 0)
		std::cout << this->name << " died" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if(this->hitPoints <= 0)
		std::cout << this->name << " is dead and can't repair itself!" << std::endl;
	else if(this->energyPoints <= 0)
		std::cout << this->name << " is out of energy and can't repair itself!" << std::endl;
	else
	{
		this->energyPoints--;
		this->hitPoints += amount;
		std::cout << this->name << " repaired itself for " << amount << " hit points" << std::endl;
	}
}

int		ClapTrap::getAttackDamage(void)
{
	return(this->attackDamage);
}

void	ClapTrap::setAttackDamage(int dmg)
{
	this->attackDamage = dmg;
}

std::string	ClapTrap::getName(void) const
{
	return(this->name);
}

void	ClapTrap::setName(std::string name)
{
	this->name = name;
}