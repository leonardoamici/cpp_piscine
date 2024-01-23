/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:48:12 by lamici            #+#    #+#             */
/*   Updated: 2023/10/24 13:51:35 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void)
{
	Base	*a;
	Base	*b;

	a = generate();
	b = generate();

	identify(a);
	identify(*a);
	identify(b);
	identify(*b);
}
	