/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:17:17 by lamici            #+#    #+#             */
/*   Updated: 2023/09/26 15:00:05 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
	FragTrap(void);
	~FragTrap(void);
	FragTrap(std::string newName);
	FragTrap(const FragTrap &copy);
	FragTrap	&operator=(FragTrap const &copy);

	void highFivesGuys(void);
};

#endif