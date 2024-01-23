/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:46:12 by lamici            #+#    #+#             */
/*   Updated: 2023/10/12 11:40:48 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <stdexcept>

class AForm;

class	GradeTooHighException : public std::exception
{
	public:
		const char *what() const throw();
};

class	GradeTooLowException : public std::exception
{
	public:
		const char *what() const throw();
};

class	FormNotSignedException : public std::exception
{
	public:
		const char *what() const throw();
};

class Bureaucrat
{
	private:
		const std::string		_name;
		int 					_grade;
		GradeTooHighException 	_GradeTooHighException;
		GradeTooLowException 	_GradeTooLowException;
		FormNotSignedException	_FormNotSignedException;

	public:
		Bureaucrat(void);
		~Bureaucrat(void);
		Bureaucrat(const std::string name, const int grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &copy);
	int					getGrade(void) const;
	const std::string 	getName(void) const;
	void				increaseGrade(void);
	void				decreaseGrade(void);
	void				signForm(AForm &Form);
	void				executeForm(const AForm &form);
};

std::ostream &operator<<(std::ostream &stream, const Bureaucrat &copy);

#endif