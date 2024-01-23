/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 12:12:03 by lamici            #+#    #+#             */
/*   Updated: 2023/11/22 10:47:30 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

static bool	isPositiveInt(const std::string &s)
{
	size_t i = 0;
 	if (s[i] == '+')
		i++;
	if (!s[i])
		return (false);
	if (s.length() - i > 10)
		return (false);
	for (; s[i]; i++)
		if (!std::isdigit(s[i]))
			return (false);
	long int tmp = std::strtol(s.c_str(), NULL, 10);
	if (tmp < INT_MIN || tmp > INT_MAX)
		return (false);
	return (true);
}

int main(int ac, char **argv)
{
	std::vector<int> vector;
	std::list<int>   list;

	if (ac <= 2)
	{
		std::cout << "invalid number of arguments" << std::endl;
		return (1);
	}
	for (int i = 1; i < ac; i++)
	{
		if (!isPositiveInt((argv[i])))
		{
			std::cout << "invalid argument" << std::endl;
			return (2);
		}
		vector.push_back(atoi(argv[i]));
		list.push_back(atoi(argv[i]));
	}
	std::cout << "before sorting: ";
	printValues(vector);

	clock_t	start;
	clock_t	end;

	start = clock();
	vector = mergeSort(vector);
	end = clock();
	std::cout << "after sorting: ";
	printValues(vector);
	double vectorTime = static_cast<double> (end - start) / CLOCKS_PER_SEC * 1000000;
	std::cout << "Time to process a range of " << vector.size() << " elements with std::vector : " << vectorTime << " us";
	std::cout << std::endl;
	start = clock();
	list = mergeSort(list);
	end = clock();

	double listTime = static_cast<double> (end - start) / CLOCKS_PER_SEC * 1000000;
	std::cout << "Time to process a range of " << list.size() << " elements with std::list : " << listTime << " us";
	std::cout << std::endl;
}




/*int main(int ac, char **av)
{
	std::vector<int> v;
	std::list<int> l;
	std::vector<int>::iterator itv;
	std::list<int>::iterator itl;
	std::vector<int>::iterator itv2;
	std::list<int>::iterator itl2;
	std::vector<int>::iterator itv3;
	std::list<int>::iterator itl3;
	std::vector<int>::iterator itv4;
	std::list<int>::iterator itl4;
	std::vector<int>::iterator itv5;
	std::list<int>::iterator itl5;
	std::vector<int>::iterator itv6;
	std::list<int>::iterator itl6;
	std::vector<int>::iterator itv7;
	std::list<int>::iterator itl7;
	std::vector<int>::iterator itv8;
	std::list<int>::iterator itl8;
	std::vector<int>::iterator itv9;
	std::list<int>::iterator itl9;
	std::vector<int>::iterator itv10;
    for (int i = 0; )
    return (0);
}*/