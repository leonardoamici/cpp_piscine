/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:21:16 by lamici            #+#    #+#             */
/*   Updated: 2023/10/04 11:12:40 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CAT_H
# define CAT_H
# include "AAnimal.hpp"

class Cat : public AAnimal
{
	private:
		Brain	*brain;
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat &Copy);
		Cat	&operator=(const Cat &copy);
		void makeSound() const;
};

#endif