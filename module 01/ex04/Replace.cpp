/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:22:20 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/07 13:19:06 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <fstream>
#include <iostream>

Replace::Replace(const std::string &filename, const std::string &s1, const std::string &s2) : filename(filename), s1(s1), s2(s2) {}

bool Replace::process()
{
	if (s1.empty())
		return false;
	
	std::ifstream	ifs(filename);
	if (!ifs.is_open())
	{
		std::cerr << "Error creating file: " << filename << std::endl;
		return false;
	}

	std::string		outputFilename = filename + ".replace";
	std::ofstream	ofs(outputFilename);
	if (!ofs.is_open())
	{
		std::cerr << "Error creating file: " << outputFilename << std::endl;
		ifs.close();
		return false;
	}

	std::string		line;
	while (std::getline(ifs, line))
	{
		replace_string(line, s1, s2);
		ofs << line << std::endl;
	}

	ifs.close();
	ofs.close();
	return true;
}

void Replace::replace_string(std::string &str, const std::string &s1, const std::string &s2)
{
    if (s1.empty())
        return;

    size_t start_pos = 0;
    while ((start_pos = str.find(s1, start_pos)) != std::string::npos)
	{
        str.erase(start_pos, s1.length());
        str.insert(start_pos, s2);
        start_pos += s2.length();
    }
}
