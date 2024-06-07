/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 23:32:45 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/07 13:19:25 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	
	std::string		filename = argv[1];
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];

	Replace		replace(filename, s1, s2);
	if (!replace.process())
	{
		std::cerr << "Error processing file: " << filename << std::endl;
		return (1);
	}
}
