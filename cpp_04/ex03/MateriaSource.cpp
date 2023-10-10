/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:50:43 by lamici            #+#    #+#             */
/*   Updated: 2023/10/06 11:25:43 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for(int nite = 0; nite < 4; nite++)
		this->materias[nite] = 0;
}

MateriaSource::~MateriaSource(void)
{
	for(int nite = 0; nite < 4; nite++)
			delete this->materias[nite];
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &copy)
{
	if(this != &copy)
	{
		for(int nite = 0; nite < 4; nite++)
			delete this->materias[nite];
		for(int nite = 0; nite < 4; nite++)
			this->materias[nite] = copy.materias[nite]->clone();
	}
	return (*this);
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	*this = copy;
}

void MateriaSource::learnMateria(AMateria* m)
{
	int		i;

	for (int nite = 0; nite < 4; nite++)
		if (this->materias[nite] == m)
			return ;
	i = 0;
	while (i < 4 && this->materias[i])
		i++;
	if (i != 4)
		this->materias[i] = m;	
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int nite = 0; nite < 4; nite++)
		if (this->materias[nite] && this->materias[nite]->getType() == type)
			return (this->materias[nite]->clone());
	return (NULL);
}