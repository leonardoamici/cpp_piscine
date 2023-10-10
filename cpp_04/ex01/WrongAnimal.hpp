/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:21:42 by lamici            #+#    #+#             */
/*   Updated: 2023/10/04 10:34:00 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H
# include <iostream>

class	WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal(void);
		~WrongAnimal(void);
		WrongAnimal(const WrongAnimal &Copy);
		std::string getType(void) const;
	WrongAnimal	&operator=(const WrongAnimal &copy);
	void	makeSound() const;
};

#endif