/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 14:36:02 by lamici            #+#    #+#             */
/*   Updated: 2023/09/27 10:58:53 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include "iostream" 

class	ClapTrap
{
	protected:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
	public:
	ClapTrap(void);
	~ClapTrap(void);
	ClapTrap(std::string newName);
	ClapTrap(const ClapTrap &copy);
	ClapTrap	&operator=(ClapTrap const &copy);
	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	void			setName(std::string	name);
	std::string		getName(void) const;
	void			setAttackDamage(int dmg);
	int				getAttackDamage(void);
};

#endif