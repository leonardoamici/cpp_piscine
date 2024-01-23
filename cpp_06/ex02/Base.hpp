/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:37:34 by lamici            #+#    #+#             */
/*   Updated: 2023/10/24 13:54:44 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BASE_H
# define BASE_H

# include <iostream>
# include <cstdlib>

class	Base
{
	public:
		virtual ~Base(void);
};

class 	A : public Base {};

class 	B : public Base {};

class 	C : public Base {};

Base *generate(void);
void identify(Base* p);
void identify(Base& p);

#endif