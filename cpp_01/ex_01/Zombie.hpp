/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:06:50 by lamici            #+#    #+#             */
/*   Updated: 2023/09/13 13:54:21 by lamici           ###   ########.fr       */
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
		Zombie(void);
		~Zombie(void);
	void	announce(void);
	void	giveName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif