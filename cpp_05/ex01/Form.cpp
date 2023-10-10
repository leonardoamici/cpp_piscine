/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:16:07 by lamici            #+#    #+#             */
/*   Updated: 2023/10/10 15:37:30 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const int	Form::setExecGrade(const int execGrade)
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

const int	Form::setSignGrade(const int signGrade)
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

const int	Form::getExecGrade(void) const
{
	return (this->_execGrade);
}

const int	Form::getSignGrade(void) const
{
	return (this->_signGrade);
}

const std::string	Form::getName(void) const
{
	return (this->_name);
}

const bool	Form::getIsSigned(void) const
{
	return (this->_isSigned);
}

Form::Form(void) : _name(""), _execGrade(150), _signGrade(150)
{
	std::cout << "standard Form constructor called" << std::endl;
	_isSigned = 0;
}

Form::~Form(void)
{
	std::cout << "standard Form destructor called" << std::endl;
}

Form::Form(const std::string name, const int execGrade, const int signGrade) : _name(name), _execGrade(setExecGrade(execGrade)), _signGrade(setSignGrade(signGrade))
{
	std::cout << "custom Form constructor called" << std::endl;
	_isSigned = 0;
}

Form::Form(const Form &copy)  : _name(copy._name), _execGrade(copy._execGrade), _signGrade(copy._signGrade)
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = copy;
}

Form &Form::operator=(const Form &copy)
{
	std::cout << "form '=' operator overload called" << std::endl;
	this->_isSigned = copy._isSigned;
	return (*this);
}

void	Form::beSigned(const Bureaucrat bureaucrat) throw()
{
	if(this->_signGrade >= bureaucrat.getGrade())
	{
		std::cout << bureaucrat.getName() << " signed " << this->_name << std::endl;
		this->_isSigned = 1;
	}
	else
		throw this->_GradeTooLowException;
}

std::ostream &operator<<(std::ostream &stream, const Form &Form)
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
