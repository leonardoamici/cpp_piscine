/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:46:15 by lamici            #+#    #+#             */
/*   Updated: 2023/10/10 14:09:47 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	a("bro", 10);
	Bureaucrat	b("bro1", 0);
	Bureaucrat	c("bro2", 160);
	Bureaucrat	d("bro3", 1);
	Bureaucrat	e("bro4", 150);

	d.increaseGrade();
	e.decreaseGrade();
	return (0);
}