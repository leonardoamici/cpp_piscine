/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:11:11 by lamici            #+#    #+#             */
/*   Updated: 2023/09/20 09:53:04 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

std::string	ft_getinput(const char *msg, int (*f)(int chr))
{
	unsigned long	i;
	std::string str;

	while(1)
	{
		i = 0;
		if(std::cin.eof())
				break ;
		std::cout << msg;
		std::getline(std::cin, str);
		if(std::cin.eof())
			break ;
		if(str == "")
			std::cerr << "Error" << std::endl;
		else
		{
			while(f(str.c_str()[i]) && i < str.length())
				i++;
			if(i == str.length())
				break ;
			else
				std::cerr << "Error" << std::endl;
		}
	}
	return (str);
}

void	phonebook::add(void)
{
	static int index;

	this->contacts[index].edit_info("first_name", ft_getinput("insert name: ", std::isalpha));
	this->contacts[index].edit_info("last_name", ft_getinput("insert last name: ", std::isalpha));
	this->contacts[index].edit_info("nickname", ft_getinput("insert nickname: ", std::isalpha));
	this->contacts[index].edit_info("phone_number", ft_getinput("insert phone number: ", std::isdigit));
	this->contacts[index].edit_info("darkest_secret", ft_getinput("insert darkest secret: ", std::isalnum));
	std::cout << std::endl;
	index = (index + 1) % 8;
}
void	print_truncated(std::string str)
{
	if(str.length() > 10)
		std::cout << str.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << str;
}

void	phonebook::print_contacts(void)
{
	int	i;

	i = 0;
	while(i < 8)
	{
		if(!this->contacts[i].get_info("first_name")[0])
			break ;
		else
		{
			std::cout << "|";
			std::cout << std::setw(10) << i + 1;
			std::cout << "|";
			print_truncated(this->contacts[i].get_info("first_name"));
			std::cout << "|";
			print_truncated(this->contacts[i].get_info("last_name"));
			std::cout << "|";
			print_truncated(this->contacts[i].get_info("nickname"));
			std::cout << "|" << std::endl;
		}
		i++;
	}
}

void	contact::print_contact(void)
{
	std::cout << this->get_info("first_name") << std::endl;
	std::cout << this->get_info("last_name") << std::endl;
	std::cout << this->get_info("nickname") << std::endl;
	std::cout << this->get_info("phone_number") << std::endl;
	std::cout << this->get_info("darkest_secret") << std::endl;
}

void	phonebook::search(void)
{
	std::string buf;
	int index;
	
	index = 1;
	buf[0] = '\n';
	if(this->contacts[0].get_info("first_name") == "")
	{
		std::cerr << "Error: phonebook empty" << std::endl;
	}
	else
	{
		this->print_contacts();
		while(buf[0] || buf == "")
		{
			if(std::cin.eof())
				break ;
			std::cout << "insert index: ";
			std::getline(std::cin, buf);
			if(std::cin.eof())
				break ;
			if (buf == "")
				std::cerr << "Error" << std::endl;
			else
			{
				index = std::atoi(buf.c_str());
				if (index > 8 || index < 1)
					std::cerr << "Error" << std::endl;
				else if(!this->contacts[index - 1].get_info("first_name")[0])
					std::cerr << "Error: contact does not exist" << std::endl;
				else
					buf[0] = '\0';
			}
		}
		this->contacts[index - 1].print_contact();
	}
}
		

phonebook::phonebook(void)
{
    return ;
}

phonebook::~phonebook(void)
{
    return ;
}