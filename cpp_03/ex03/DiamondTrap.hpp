/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:00:23 by lamici            #+#    #+#             */
/*   Updated: 2023/09/26 16:16:22 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string	name;
	public:
	DiamondTrap(void);
	~DiamondTrap(void);
	DiamondTrap(std::string newName);
	DiamondTrap(const DiamondTrap &copy);
	DiamondTrap	&operator=(DiamondTrap const &copy);

	void	attack(const std::string& target);
	void	whoAmI(void);
};

#endif