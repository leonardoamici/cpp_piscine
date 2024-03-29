/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:16:09 by lamici            #+#    #+#             */
/*   Updated: 2023/10/12 13:59:30 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FORM_H
# define FORM_H

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class	Form
{
	private:
		const std::string		_name;
		bool					_isSigned;
		const int				_execGrade;
		const int				_signGrade;
		GradeTooHighException 	_GradeTooHighException;
		GradeTooLowException	_GradeTooLowException;
		int	setExecGrade(const int execGrade);
		int	setSignGrade(const int execGrade);

	public:
		Form(void);
		~Form(void);
		Form(const std::string name, const int execGrade, const int _signGrade);
		Form(const Form &copy);
		Form &operator=(const Form &copy);
		void	beSigned(const Bureaucrat bureaucrat);
		int	getExecGrade(void) const;
		int	getSignGrade(void) const;
		std::string	getName(void) const;
		bool	getIsSigned(void) const;
};

std::ostream &operator<<(std::ostream &stream, const Form &copy);

#endif