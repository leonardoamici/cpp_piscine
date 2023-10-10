/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:09:30 by lamici            #+#    #+#             */
/*   Updated: 2023/09/13 11:01:18 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zomb1;

	zomb1 = newZombie("cock");
	randomChump("Mega cock");
	zomb1->announce();
	delete(zomb1);
	return (0);
}
