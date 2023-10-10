/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:02:54 by lamici            #+#    #+#             */
/*   Updated: 2023/09/14 11:43:22 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void rewrite(std::string buf, std::string find, std::string replace, std::ofstream *outfile)
{
	int i;
	int	pos;

	i = 0;
	pos = buf.find(find, i);
	while(buf[i])
	{
		if(i == pos && find[0])
		{
			*outfile << replace;
			i += find.length();
			pos = buf.find(find, i);
		}
		else
		{
			*outfile << buf[i];
			i++;
		}
	}
	return ;
}

int	main(int ac, char **av)
{
	if(ac == 4)
	{
		std::string buf(av[1]);
		std::string	newBuff(av[1]);
		std::string find(av[2]);
		std::string replace(av[3]);

		newBuff.append(".replace");
		std::ifstream	infile(buf.c_str()); 
		if(infile)
		{
			std::ofstream	outfile(newBuff.c_str());
			getline(infile, buf, '\0');
			rewrite(buf, find, replace, &outfile);
			infile.close();
			outfile.close();
		}
		else
			std::cerr << "Error: file does not exist: " << buf << std::endl;
	}
	return(0);
}