/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:51:40 by lamici            #+#    #+#             */
/*   Updated: 2023/10/23 11:01:40 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SERIALIZER_H
# define SERIALIZER_H

# include "Data.hpp"
# include <stdint.h>
# include <iostream>

class Serializer
{
	private:
		Serializer(void);
		~Serializer(void);
		Serializer(const Serializer &copy);
		Serializer &operator=(const Serializer &copy);
	public:
	static uintptr_t 	serialize(Data* ptr);
	static Data* 		deserialize(uintptr_t raw);
};

#endif