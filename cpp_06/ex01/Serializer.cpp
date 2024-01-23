/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:50:20 by lamici            #+#    #+#             */
/*   Updated: 2023/10/23 11:22:28 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void)
{
	;
}

Serializer::~Serializer(void)
{
	;
}

Serializer::Serializer(const Serializer &copy)
{
	if (&copy != this)
		;
}

Serializer	&Serializer::operator=(const Serializer &copy)
{
	if (&copy != this)
		;
	return (*this);
}

uintptr_t 	Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast <uintptr_t> (ptr));
}

Data 		*Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast <Data *> (raw));
}