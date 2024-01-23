/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 09:31:48 by lamici            #+#    #+#             */
/*   Updated: 2023/10/12 11:35:05 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 45, 72)
{
	std::cout << "standard ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 45, 72)
{
	setTarget(target);
	std::cout << "target ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "standard ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm("ShrubberyCreationForm", 45, 72)
{
	this->setTarget(copy.getTarget());
	AForm::operator=(copy);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string	name;

	name = this->getTarget() + "_shrubbery";
	AForm::execute(executor);
	if (executor.getGrade() <= this->getExecGrade() && this->getIsSigned())
	{
		std::ofstream	outfile(name.c_str());
		outfile << "       _-_    \n\
						/~~   ~~\\ \n\
					 /~~         ~~\\ \n\
				    {               } \n\
				    \\  _-     -_  / \n\
				       ~  \\ //  ~ \n\
				    _- -   | | _- _ \n\
				      _ -  | |   -_ \n\
				          // \\"	<< std::endl;
	}
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	AForm::operator=(copy);
	setTarget(copy.getTarget());
	return (*this);
}