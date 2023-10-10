/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:55:14 by lamici            #+#    #+#             */
/*   Updated: 2023/09/22 11:06:34 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) 
{
	Point	a(0, 0), b(0, 10), c(5, 0), d(2, 1);

	if(bsp(a, b, c, d))
		std::cout << "point is inside the tringle" << std::endl;
	else
		std::cout << "point is not inside the triangle" << std::endl;
	return 0;
}
