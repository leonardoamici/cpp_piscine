/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:42:17 by lamici            #+#    #+#             */
/*   Updated: 2023/09/18 15:06:24 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"
#include "HumanA.hpp"

int main(void)
{
	Weapon	wp(NULL);
	//wp.setType("Gun");
	HumanA	bob("bob", &wp);

	bob.attack();
	wp.setType("club");
	bob.attack();

	HumanB freddy_fazbear("freddy_fazbear");
	freddy_fazbear.attack();
	freddy_fazbear.setWeapon(&wp);
	freddy_fazbear.attack();
}