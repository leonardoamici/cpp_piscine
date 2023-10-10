/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:21:02 by lamici            #+#    #+#             */
/*   Updated: 2023/10/04 10:26:57 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>

class	Animal
{
	protected:
		std::string	type;
	public:
		Animal(void);
		~Animal(void);
		Animal(const Animal &Copy);
		std::string getType(void) const;
		Animal	&operator=(const Animal &copy);
		virtual void	makeSound(void) const;
};

#endif