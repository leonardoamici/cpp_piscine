/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:45:56 by lamici            #+#    #+#             */
/*   Updated: 2023/09/26 15:42:09 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:
	ScavTrap(void);
	~ScavTrap(void);
	ScavTrap(std::string newName);
	ScavTrap(const ScavTrap &copy);
	ScavTrap	&operator=(ScavTrap const &copy);

	void	guardGate(void);
};

#endif