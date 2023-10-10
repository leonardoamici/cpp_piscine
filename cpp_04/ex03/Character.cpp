/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:20:39 by lamici            #+#    #+#             */
/*   Updated: 2023/10/06 11:40:33 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	for(int nite = 0; nite < 4; nite++)
		this->inventory[nite] = 0;
}

Character::~Character(void)
{
	for(int nite = 0; nite < 4; nite++)
			delete this->inventory[nite];
}

Character::Character(const std::string &name)
{
	for(int nite = 0; nite < 4; nite++)
		this->inventory[nite] = 0;
	this->name = name;
}

Character	&Character::operator=(const Character &copy)
{
	if(this != &copy)
	{
		this->name = copy.name;
		for(int nite = 0; nite < 4; nite++)
			delete this->inventory[nite];
		for(int nite = 0; nite < 4; nite++)
			this->inventory[nite] = copy.inventory[nite]->clone();
	}
	return (*this);
}

Character::Character(const Character &copy)
{
	*this = copy;
}

std::string	const &Character::getName(void) const
{
	return (this->name);
}

void Character::equip(AMateria *m)
{
	int		i;

	for (int nite = 0; nite < 4; nite++)
		if (this->inventory[nite] == m)
			return ;
	i = 0;
	while (i < 4 && this->inventory[i])
		i++;
	if (i != 4)
		this->inventory[i] = m;	
}

void Character::unequip(int idx)
{
	if (idx > -1 && idx < 4)
		this->inventory[idx] = 0;
}

void Character::use(int idx, ICharacter &target)
{
	if ((idx > -1 && idx < 4) && this->inventory[idx])
		this->inventory[idx]->use(target);
}