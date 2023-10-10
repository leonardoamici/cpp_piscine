/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:29:04 by lamici            #+#    #+#             */
/*   Updated: 2023/09/20 09:36:45 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

contact::contact(void)
{
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->darkest_secret = "";
    return ;
}

std::string	contact::get_info(std::string type)
{
	if (type == "first_name")
		return(this->first_name);
	else if (type == "last_name")
		return(this->last_name);
	else if (type == "nickname")
		return(this->nickname);
	else if (type == "phone_number")
		return(this->phone_number);
	else if (type == "darkest_secret")
		return(this->darkest_secret);
	return ("");
}

void	contact::edit_info(std::string type, std::string input)
{
	if (type == "first_name")
		this->first_name = input;
	else if (type == "last_name")
		this->last_name = input;
	else if (type == "nickname")
		this->nickname = input;
	else if (type == "phone_number")
		this->phone_number = input;
	else if (type == "darkest_secret")
		this->darkest_secret = input;
}

contact::~contact(void)
{
    return ;
}