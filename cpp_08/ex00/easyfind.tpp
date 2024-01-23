/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:25:23 by lamici            #+#    #+#             */
/*   Updated: 2023/11/08 10:59:11 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>

int		easyfind(const T container, int find)
{
	int		ret;

	ret = 0;
	for (typename T::const_iterator  i = container.begin(); i != container.end(); i++ , ret++)
		if (*i == find)
			return (ret);
	return (-1);
}