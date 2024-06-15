/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 15:38:04 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/15 15:43:34 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
    	FragTrap();
    	FragTrap(const std::string& name);
    	FragTrap(const FragTrap& src);
 	   ~FragTrap();

    FragTrap& operator=(const FragTrap& src);

    void attack(const std::string& target);
    void highFivesGuys(void);
};

#endif