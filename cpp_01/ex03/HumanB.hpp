/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:42:03 by lamici            #+#    #+#             */
/*   Updated: 2023/09/13 15:07:11 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Weapon.hpp"
# include <iostream>

class	HumanB
{
	private:
		Weapon 		*wp;
		std::string	name;
	public:
	HumanB(std::string	name);
	~HumanB(void);
	void	attack(void);
	void	setWeapon(Weapon *wp);
};
