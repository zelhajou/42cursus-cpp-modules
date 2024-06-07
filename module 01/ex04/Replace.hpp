/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:18:48 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/07 12:21:11 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>

class Replace
{
	public:
		Replace(const std::string &filename, const std::string &s1, const std::string &s2);
		bool process();
	private:
	    void replace_string(std::string &str, const std::string &s1, const std::string &s2);
		std::string filename;
		std::string s1;
		std::string s2;
};

#endif