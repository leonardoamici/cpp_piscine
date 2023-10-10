/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:06:50 by lamici            #+#    #+#             */
/*   Updated: 2023/09/13 10:34:45 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <stdio.h>
# include <iostream>
# include <cstdlib>

class	Zombie
{
	private:
		std::string	name;
	public:
		Zombie(std::string name);
		~Zombie(void);
	void	announce(void);
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif