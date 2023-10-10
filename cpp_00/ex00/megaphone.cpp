/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:38:18 by lamici            #+#    #+#             */
/*   Updated: 2023/09/18 09:48:50 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int     main(int ac, char **argv)
{
    std::string input;

    if (ac > 1)
    {
        for (int i = 1; i < ac; i++)
        {
            input = argv[i];
            for (size_t z = 0; z < input.length(); z++)
                std::cout << (char)toupper(argv[i][z]);
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}