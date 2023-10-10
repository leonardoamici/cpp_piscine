/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:21:02 by lamici            #+#    #+#             */
/*   Updated: 2023/10/04 11:08:45 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>
# include "Brain.hpp"

class	AAnimal
{
	protected:
		std::string	type;
	public:
		AAnimal(void);
		virtual ~AAnimal(void);
		AAnimal(const AAnimal &Copy);
		std::string getType(void) const;
		AAnimal	&operator=(const AAnimal &copy);
		virtual void	makeSound(void) const = 0;
};

#endif