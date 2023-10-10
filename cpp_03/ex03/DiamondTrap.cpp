/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:00:02 by lamici            #+#    #+#             */
/*   Updated: 2023/09/27 10:57:15 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	name = "";
	attackDamage = FragTrap::attackDamage;
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	std::cout << "standard DiamondTrap constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string newName) : ClapTrap(newName + "_clap_name"), name(newName)
{
	attackDamage = FragTrap::attackDamage;
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	std::cout << "string DiamondTrap constructor called" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "standard DiamondTrap destructor called" << std::endl;
	return ;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &copy)
{	
	if(this != &copy)
	{
		this->name = copy.name;
		this->setName(copy.getName());
		this->attackDamage = copy.attackDamage;
		this->hitPoints = copy.hitPoints;
		this->energyPoints = copy.energyPoints;
	}
	return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	*this = copy;
}
void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am " << this->name << " and " << ClapTrap::name << " is my father" << std::endl;
}