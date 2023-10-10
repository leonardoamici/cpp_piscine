/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:21:02 by lamici            #+#    #+#             */
/*   Updated: 2023/10/04 11:04:36 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>
# include "Brain.hpp"

class	Animal
{
	protected:
		std::string	type;
	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(const Animal &Copy);
		std::string getType(void) const;
		Animal	&operator=(const Animal &copy);
		virtual void	makeSound(void) const;
};

#endif