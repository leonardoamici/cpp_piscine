/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:29:22 by lamici            #+#    #+#             */
/*   Updated: 2023/09/18 11:25:53 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <iostream>
# include <iomanip>
# include <cstring>
# include <stdio.h>
# include <cstdlib>

class contact
{
	private:
        std::string first_name;
        std::string last_name;
		std::string nickname;
        std::string	phone_number;
        std::string darkest_secret;
    public:
        contact(void);
        ~contact(void);
	void	print_contact(void);
	void	edit_info(std::string type, std::string input);
	std::string	get_info(std::string type);
};

#endif