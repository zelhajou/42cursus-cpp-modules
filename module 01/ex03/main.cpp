/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:59:01 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/06 16:29:47 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "iostream"
int main()
{
	Weapon club = Weapon("PAPAPAPAPAPA");

	club.setType("ekekkeke");
	std::cout << club.getType() << std::endl;
}