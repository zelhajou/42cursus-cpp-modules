/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:24:05 by zelhajou          #+#    #+#             */
/*   Updated: 2024/07/04 10:44:49 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat bob("Bob", 2);
        std::cout << bob << std::endl;

        bob.incrementGrade();
        std::cout << bob << std::endl;

        bob.incrementGrade(); // This will throw an exception
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Bureaucrat john("John", 149);
        std::cout << john << std::endl;

        john.decrementGrade();
        std::cout << john << std::endl;

        john.decrementGrade(); // This will throw an exception
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Bureaucrat invalid("Invalid", 0); // This will throw an exception
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Bureaucrat invalid("Invalid", 151); // This will throw an exception
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
