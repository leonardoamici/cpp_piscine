/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 14:36:06 by lamici            #+#    #+#             */
/*   Updated: 2023/09/25 16:25:45 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	d("Mario");
	ClapTrap	a(d);
	ClapTrap	b;

	b.setName("Luca");

	ClapTrap	c;
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
	c.beRepaired(2);
	c.attack(a.getName());

	return (0);
}