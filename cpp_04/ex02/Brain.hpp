/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:37:47 by lamici            #+#    #+#             */
/*   Updated: 2023/10/04 10:53:09 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BRAIN_H
# define BRAIN_H
# include <iostream>

class Brain
{
	protected:
		std::string ideas[100];
	public:
		Brain(void);
		~Brain(void);
		Brain(const Brain &copy);
		Brain &operator=(const Brain &copy);
};

#endif