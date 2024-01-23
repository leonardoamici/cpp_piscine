/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:59:11 by abettini          #+#    #+#             */
/*   Updated: 2023/10/24 14:15:38 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <climits>
#include <cstdlib>
#include <iomanip>

//-------------------------------------------------------------------
//orthodox form

ScalarConverter::ScalarConverter(void)
{
	return ;
}

ScalarConverter::~ScalarConverter(void)
{
	return ;
}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
	*this = src;
	return ;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &src)
{
	if (this != &src)
		;
	return (*this);
}

//-------------------------------------------------------------------

static void dealSpecial(const std::string s)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::string tmp = s;
	if (s == "+inff" || s == "-inff" || s == "nanf")
		tmp[s.length() - 1] = '\0';
	std::cout << "float: " << tmp << "f" << std::endl;
	std::cout << "double: " << tmp << std::endl;
}

static void	dealChar(const std::string &s)
{
	char	n;

	if (!s[1])
		n = static_cast <char> (s[0]);
	else
		n = static_cast <char> (s[1]);

	std::cout << "char: '" << (n) << "'" << std::endl;
	std::cout << "int: " << static_cast <int> (n) << "" << std::endl;
	std::cout << "float: " << static_cast <float> (n) << ".0f" << std::endl;
	std::cout << "double: " << static_cast <double> (n) << ".0" << std::endl;
}

static void	dealInt(const std::string &s)
{
	int	n;

	n = static_cast <int> (std::atoi(s.c_str()));

	if (n < CHAR_MIN || n > CHAR_MAX)
		std::cout << "char: impossible" << std::endl;
	else if (n < 32 || n > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast <char> (n) << "'" << std::endl;
	std::cout << "int: " << (n) << std::endl;
	std::cout << "float: " << static_cast <float> (n) << ".0f" << std::endl;
	std::cout << "double: " << static_cast <double> (n) << ".0" << std::endl;
}

static void	dealFloat(const std::string &s)
{
	float	n;

	n = static_cast <float> (std::strtof(s.c_str(), NULL));
	if (n < CHAR_MIN || n > CHAR_MAX)
		std::cout << "char: impossible" << std::endl;
	else if (n < 32 || n > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast <char> (n) << "'" << std::endl;
	if (long(n) < (INT_MIN) || long(n) > (INT_MAX))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast <int> (n) << std::endl;
	if (n == floorf(n))
	{
		std::cout << std::setprecision((int)s.length() - 2) << "float: " << static_cast <float> (n) << ".0f" << std::endl;
		std::cout << std::setprecision((int)s.length() - 2) << "double: " << static_cast <double> (n) << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << static_cast <float> (n) << "f" << std::endl;
		std::cout << "double: " << static_cast <double> (n) << std::endl;
	}
}

static void	dealDouble(const std::string &s)
{
	double	n;

	n = static_cast <double> (std::strtod(s.c_str(), NULL));
	if (n < CHAR_MIN || n > CHAR_MAX)
		std::cout << "char: impossible" << std::endl;
	else if (n < 32 || n > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast <char> (n) << "'" << std::endl;
	if (n < INT_MIN || n > INT_MAX)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast <int> (n) << std::endl;
	if (n == floor(n))
	{
		std::cout << std::setprecision((int)s.length() - 1) << "float: " << static_cast <float> (n) << ".0f" << std::endl;
		std::cout << std::setprecision((int)s.length() - 1) << "double: " << static_cast <double> (n) << ".0" << std::endl;
	}
	else
	{
		std::cout << std::setprecision((int)s.length() - 1)  << "float: " << static_cast <float> (n) << "f" << std::endl;
		std::cout << std::setprecision((int)s.length() - 1) << "double: " << static_cast <double> (n) << std::endl;
	}
}

int	checkType(const std::string &s);

void	ScalarConverter::convert(const std::string &literal)
{
	int type = checkType(literal);
	switch (type)
	{
		case 0:
			dealSpecial(literal);
			break;
		case 1:
			dealChar(literal);
			break;
		case 2:
			dealInt(literal);
			break;
		case 3:
			dealFloat(literal);
			break;
		case 4:
			dealDouble(literal);
			break;
		default:
			std::cerr << "Error" << std::endl;
	}
}
