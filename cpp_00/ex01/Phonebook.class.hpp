/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:11:07 by lamici            #+#    #+#             */
/*   Updated: 2023/09/11 15:52:52 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "contact.class.hpp"

class phonebook
{
	private:
 		contact contacts[8];
		void	print_contacts(void);
    public:
		phonebook(void);
	void	add(void);
	void	search(void);
        ~phonebook(void);
};

#endif