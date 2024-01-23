/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:16:07 by lamici            #+#    #+#             */
/*   Updated: 2023/10/12 13:54:21 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

int	AForm::setExecGrade(const int execGrade)
{
	try
	{
		if (execGrade < 1)
			throw this->_GradeTooHighException;
		else if (execGrade > 150)
			throw this->_GradeTooLowException;
		return(execGrade);
	}
	catch (GradeTooHighException)
	{
		std::cout << this->_GradeTooHighException.what() << std::endl; 
		return(1);
	}
	catch (GradeTooLowException)
	{
		std::cout << this->_GradeTooLowException.what() << std::endl; 
		return(150);
	}
}

int	AForm::setSignGrade(const int signGrade)
{
	try
	{
		if (signGrade < 1)
			throw this->_GradeTooHighException;
		else if (signGrade > 150)
			throw this->_GradeTooLowException;
		return(signGrade);
	}
	catch (GradeTooHighException)
	{
		std::cout << this->_GradeTooHighException.what() << std::endl; 
		return(1);
	}
	catch (GradeTooLowException)
	{
		std::cout << this->_GradeTooLowException.what() << std::endl; 
		return(150);
	}
}

void	AForm::setTarget(std::string target)
{
	this->_target = target;
}

int	AForm::getExecGrade(void) const
{
	return (this->_execGrade);
}

std::string	AForm::getTarget(void) const
{
	return (this->_target);
}

int	AForm::getSignGrade(void) const
{
	return (this->_signGrade);
}

std::string	AForm::getName(void) const
{
	return (this->_name);
}

bool	AForm::getIsSigned(void) const
{
	return (this->_isSigned);
}

AForm::AForm(void) : _name(""), _execGrade(150), _signGrade(150)
{
	std::cout << "standard Form constructor called" << std::endl;
	_isSigned = 0;
}

AForm::~AForm(void)
{
	std::cout << "standard Form destructor called" << std::endl;
}

AForm::AForm(const std::string name, const int execGrade, const int signGrade) : _name(name), _execGrade(setExecGrade(execGrade)), _signGrade(setSignGrade(signGrade))
{
	std::cout << "custom Form constructor called" << std::endl;
	_isSigned = 0;
}

AForm::AForm(const AForm &copy)  : _name(copy._name), _execGrade(copy._execGrade), _signGrade(copy._signGrade)
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = copy;
}

AForm &AForm::operator=(const AForm &copy)
{
	std::cout << "form '=' operator overload called" << std::endl;
	this->_isSigned = copy._isSigned;
	return (*this);
}

void	AForm::beSigned(const Bureaucrat bureaucrat)
{
	if(this->_signGrade >= bureaucrat.getGrade())
	{
		std::cout << bureaucrat.getName() << " signed " << this->_name << std::endl;
		this->_isSigned = 1;
	}
	else
		throw this->_GradeTooLowException;
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->_execGrade)
		throw this->_GradeTooLowException;
	else if (!this->_isSigned)
	{
		throw this->_FormNotSignedException;
	}
}

std::ostream &operator<<(std::ostream &stream, const AForm &Form)
{
	std::cout << Form.getName() << ", Signing grade: ";
	std::cout << Form.getSignGrade() << ", Execution grade: " << Form.getExecGrade();
	if(Form.getIsSigned())
		std::cout << ", has already been signed";
	else
		std::cout << ", has yet to be signed";
	std::cout << std::endl;
	return (stream);
}
