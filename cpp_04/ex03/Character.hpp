/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:20:42 by lamici            #+#    #+#             */
/*   Updated: 2023/10/06 10:37:01 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp" 
# include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria	*inventory[4];
	public:
		Character(void);
		~Character(void);
		Character(const std::string &name);
		Character(const Character &copy);
	Character &operator=(const Character &copy);
	virtual std::string const &getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif