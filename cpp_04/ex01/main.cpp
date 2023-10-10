/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:21:34 by lamici            #+#    #+#             */
/*   Updated: 2023/10/04 11:07:07 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *Animals[10];
	int i = 0;

	while (i < 5)
		Animals[i++] = new Dog();
	while (i < 10)
		Animals[i++] = new Cat();
	for(int x = 0; x < 10; x++)
		delete (Animals[x]);
	return (0);
}