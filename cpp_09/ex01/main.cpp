/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:26:58 by lamici            #+#    #+#             */
/*   Updated: 2023/11/18 14:59:40 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
        processInput(av[1]);
    else
        std::cout << "Error" << std::endl;
    return (0);
}