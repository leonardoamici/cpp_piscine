/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 14:36:06 by lamici            #+#    #+#             */
/*   Updated: 2023/09/27 10:42:55 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap	d("Mario");
	ClapTrap	a(d);
	ScavTrap	b;

	b.setName("Luca");

	ScavTrap	c;
	c = b;

	c.setAttackDamage(3);
	a.setAttackDamage(3);

	a.attack(c.getName());
	c.takeDamage(a.getAttackDamage());

	c.beRepaired(2);
	c.attack(a.getName());
	a.takeDamage(c.getAttackDamage());

	c.attack(a.getName());
	a.takeDamage(c.getAttackDamage());

	c.attack(a.getName());
	a.takeDamage(c.getAttackDamage());

	c.attack(a.getName());
	a.takeDamage(c.getAttackDamage());

	c.attack(a.getName());
	a.takeDamage(c.getAttackDamage());

	c.attack(a.getName());
	a.takeDamage(c.getAttackDamage());

	c.beRepaired(2);
	c.beRepaired(2);
	c.beRepaired(2);
	c.beRepaired(2);
	c.guardGate();
	c.attack(a.getName());

	return (0);
}