/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:24:02 by zelhajou          #+#    #+#             */
/*   Updated: 2024/07/04 10:44:41 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Constructor
Bureaucrat::Bureaucrat(const std::string& name, int grade)
    : name(name), grade(grade) {
    checkGrade(grade);
}

// Copy Constructor
Bureaucrat::Bureaucrat(const Bureaucrat& other)
    : name(other.name), grade(other.grade) {
}

// Assignment Operator
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other) {
        // name is const, cannot be assigned, only grade is assigned
        this->grade = other.grade;
    }
    return *this;
}

// Destructor
Bureaucrat::~Bureaucrat() {
}

// Getters
const std::string& Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
    return grade;
}

// Increment Grade
void Bureaucrat::incrementGrade() {
    checkGrade(grade - 1);
    --grade;
}

// Decrement Grade
void Bureaucrat::decrementGrade() {
    checkGrade(grade + 1);
    ++grade;
}

// Exception Handling
const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

// Check Grade
void Bureaucrat::checkGrade(int grade) const {
    if (grade < highestGrade) {
        throw GradeTooHighException();
    } else if (grade > lowestGrade) {
        throw GradeTooLowException();
    }
}

// Output Stream Overload
std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}
