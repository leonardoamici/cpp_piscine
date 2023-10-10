/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 14:36:06 by lamici            #+#    #+#             */
/*   Updated: 2023/09/27 10:36:38 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	b("Luca");

	b.attack(b.getName());
	b.takeDamage(b.getAttackDamage());
	b.beRepaired(2);
	b.beRepaired(2);
	b.attack(b.getName());
	b.whoAmI();
	b.guardGate();
	b.highFivesGuys();

	return (0);
}