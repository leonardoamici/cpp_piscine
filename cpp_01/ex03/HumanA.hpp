/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:41:58 by lamici            #+#    #+#             */
/*   Updated: 2023/09/13 15:01:57 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Weapon.hpp"
# include <iostream>

class	HumanA
{
	private:
		Weapon 		*wp;
		std::string	name;
	public:
	HumanA(std::string	name, Weapon *new_wp);
	~HumanA(void);
		void	attack(void);
};
