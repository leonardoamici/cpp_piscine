/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:31:58 by lamici            #+#    #+#             */
/*   Updated: 2023/12/18 14:13:52 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <list>
# include <climits>
# include <cstdlib>
# include <ctime>

template <typename T>

static void	printValues(T &v)
{
	std::cout<< "[";
	for (typename T::iterator it = v.begin(); it != v.end(); )
	{
		std::cout << *it;
		it++;
		if (it != v.end())
		{
			std::cout << ", ";
		}
	}
	std::cout << "]";	
	std::cout << std::endl;
	return ;
}

template <typename T>

T	merge(T firstHalf, T secondHalf)
{
	T merger;
	
	while (!firstHalf.empty() && !secondHalf.empty())
	{
		if (firstHalf.front() > secondHalf.front())
		{
			merger.push_back(secondHalf.front());
			secondHalf = T(++secondHalf.begin(), secondHalf.end());
		}
		else
		{
			merger.push_back(firstHalf.front());
			firstHalf = T(++firstHalf.begin(), firstHalf.end());
		}
	}
	while (!firstHalf.empty())
	{
		merger.push_back(firstHalf.front());
		firstHalf = T(++firstHalf.begin(), firstHalf.end());
	}
	while (!secondHalf.empty())
	{
		merger.push_back(secondHalf.front());
		secondHalf = T(++secondHalf.begin(), secondHalf.end());
	}
	return (merger);
}

template <typename T>

T	mergeSort(T &values)
{
	if (values.size() == 1)
		return (values);
	
	typename T::iterator mid = values.begin();
	for (unsigned long i = 0; i < values.size() / 2; i++)
		mid++;

	T firstHalf(values.begin(), mid);
	T secondHalf(mid, values.end());
	firstHalf = mergeSort(firstHalf);
	secondHalf = mergeSort(secondHalf);

	return(merge(firstHalf, secondHalf));
}

#endif