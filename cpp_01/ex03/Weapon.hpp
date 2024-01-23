/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:42:15 by lamici            #+#    #+#             */
/*   Updated: 2023/09/18 15:05:53 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	Weapon
{
	private:
		std::string	type;
	public:
		const std::string	&getType();
		void				setType(std::string type);
	Weapon(std::string type);
	~Weapon(void);
};
