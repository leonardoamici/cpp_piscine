/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:21:23 by lamici            #+#    #+#             */
/*   Updated: 2023/10/04 11:12:36 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DOG_H
# define DOG_H
# include "AAnimal.hpp"

class Dog : public AAnimal
{
	private:
		Brain	*brain;
	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog &Copy);
	Dog	&operator=(const Dog &copy);
	void makeSound() const;
};

#endif