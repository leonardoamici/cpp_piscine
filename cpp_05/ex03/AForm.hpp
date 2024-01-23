/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:16:09 by lamici            #+#    #+#             */
/*   Updated: 2023/10/12 13:43:11 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef AFORM_H
# define AFORM_H

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class	AForm
{
	private:
		const std::string		_name;
		std::string				_target;
		bool					_isSigned;
		const int				_execGrade;
		const int				_signGrade;
		GradeTooHighException 	_GradeTooHighException;
		GradeTooLowException	_GradeTooLowException;
		FormNotSignedException	_FormNotSignedException;
		int	setExecGrade(const int execGrade);
		int	setSignGrade(const int execGrade);

	public:
		AForm(void);
		virtual ~AForm(void);
		AForm(const std::string name, const int execGrade, const int signGrade);
		AForm(const AForm &copy);
		AForm &operator=(const AForm &copy);
		void				beSigned(const Bureaucrat bureaucrat);
		int					getExecGrade(void) const;
		int					getSignGrade(void) const;
		std::string			getName(void) const;
		void				setTarget(std::string target);
		std::string			getTarget(void) const;
		bool				getIsSigned(void) const;
		virtual void		execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &stream, const AForm &copy);

#endif