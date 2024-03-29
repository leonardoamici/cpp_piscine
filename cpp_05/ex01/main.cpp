/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:46:15 by lamici            #+#    #+#             */
/*   Updated: 2023/10/12 14:02:35 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
	//---------------------------------------------------
	std::cout << std::endl << "--- Constructors: --------------" << std::endl;

	Bureaucrat	a("bob", -1);
	Bureaucrat	b(a);

	Form		f1("F1", 10, 15);
	Form		f2("F2", 0, 160);
	Form		f3(f1);

	//std::cout << b.getName() << std::endl;
	//std::cout << b.getGrade() << std::endl;

	b.increaseGrade();
	b.decreaseGrade();
	b.decreaseGrade();
	b.decreaseGrade();
	b.decreaseGrade();
	b.increaseGrade();

	//---------------------------------------------------
	std::cout << std::endl << "--- Tests ----------------------" << std::endl;

	std::cout << "f1: " << f1.getIsSigned() << std::endl;
	b.signForm(f1);
	std::cout << "f1: " << f1.getIsSigned() << std::endl;

	std::cout << "f1: " << f1.getIsSigned() << std::endl;
	b.signForm(f1);
	std::cout << "f1: " << f1.getIsSigned() << std::endl;

	std::cout << "f2: " << f2.getIsSigned() << std::endl;
	b.signForm(f2);
	std::cout << "f2: " << f2.getIsSigned() << std::endl;

	std::cout << "f3: " << f3.getIsSigned() << std::endl;
	b.signForm(f3);
	std::cout << "f3: " << f3.getIsSigned() << std::endl;

	//---------------------------------------------------
	std::cout << std::endl << "--- Bureaucrats prints: --------" << std::endl;
	std::cout << b << std::endl;
	std::cout << a << std::endl;

	//---------------------------------------------------
	std::cout << std::endl << "--- Forms prints: --------------" << std::endl;
	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;

	//---------------------------------------------------
	std::cout << std::endl << "--- Destructors: ---------------" << std::endl;

	return (0);
}