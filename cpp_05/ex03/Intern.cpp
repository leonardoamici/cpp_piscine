/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:47:04 by lamici            #+#    #+#             */
/*   Updated: 2023/10/12 13:55:38 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

AForm	*Intern::makeForm(const std::string &name, const std::string &target)
{
	std::string forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	AForm		*form;
	int i = 0;

	for(i = 0; i < 3; i++)
	{
		if(forms[i] == name)
			break ;
	}
	switch (i)
	{
		case 0:
			form = new PresidentialPardonForm(target);
			break ;
		case 1:
			form = new RobotomyRequestForm(target);
			break ;
		case 2:
			form = new ShrubberyCreationForm(target);
			break ;
		default:
			std::cerr << "Form type does not exist" << std::endl;
			form = NULL;
	}
	return (form);
}
