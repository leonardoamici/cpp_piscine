/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:46:10 by lamici            #+#    #+#             */
/*   Updated: 2023/10/10 15:36:59 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char *GradeTooHighException::what() const throw()
{
	return("Grade too high, defaulted to maximum grade");
}

const char *GradeTooLowException::what() const throw()
{
	return("Grade too low, defaulted to minimum grade");
}

Bureaucrat::Bureaucrat(void)
{
	std::cout << "default Bureaucrat constructor called" << std::endl; 
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	try
	{
		if (grade < 1)
			throw this->_GradeTooHighException;
		else if (grade > 150)
			throw this->_GradeTooLowException;
		this->_grade = grade;
	}
	catch (GradeTooHighException)
	{
		this->_grade = 1;
		std::cout << this->_GradeTooHighException.what() << std::endl; 
	}
	catch (GradeTooLowException)
	{
		this->_grade = 150;
		std::cout << this->_GradeTooLowException.what() << std::endl; 
	}
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "standard Bureaucrat destructor called" << std::endl; 
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name)
{
	std::cout << "copy Bureaucrat constructor called" << std::endl; 
	*this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
	std::cout << "Bureaucrat operator overload called" << std::endl;
	this->_grade = copy._grade;
	return (*this);
}

std::ostream &operator<<(std::ostream &stream, const Bureaucrat &bureaucrat)
{
	std::cout << bureaucrat.getName() << ", bureaucrat grade : " << bureaucrat.getGrade() << std::endl;
	return (stream);
}

int	Bureaucrat::getGrade(void) const
{
	return(this->_grade);
}

const std::string	Bureaucrat::getName(void) const
{
	return(this->_name);
}

void	Bureaucrat::increaseGrade(void)
{
	try
	{
		if (_grade - 1 < 1)
			throw this->_GradeTooHighException;
		this->_grade--;
	}
	catch (GradeTooHighException)
	{
		this->_grade = 1;
		std::cout << this->_GradeTooHighException.what() << std::endl; 
	}
}

void	Bureaucrat::decreaseGrade(void)
{
	try
	{
		if (_grade + 1 > 150)
			throw this->_GradeTooLowException;
		this->_grade++;
	}
	catch (GradeTooLowException)
	{
		this->_grade = 150;
		std::cout << this->_GradeTooLowException.what() << std::endl; 
	}
}

void	Bureaucrat::signForm(Form Form)
{
	try
	{
		if(Form.getIsSigned())
			std::cout << this->_name << " couldn't sign " << Form.getName() << " because it is already signed" << std::endl;
		else
			Form.beSigned(*this);
	}
	catch (GradeTooHighException)
	{
		std::cout <<  this->getName() << " couldn't sign " << Form.getName() << " because his grade is insufficient" << std::endl;
	}
}