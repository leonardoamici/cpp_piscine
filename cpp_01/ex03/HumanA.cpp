/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:41:51 by lamici            #+#    #+#             */
/*   Updated: 2023/09/13 15:02:58 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->wp->getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon *new_wp) : wp(new_wp)
{
	this->name = name;
}

HumanA::~HumanA(void)
{
	;
}