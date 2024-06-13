/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 17:24:54 by zelhajou          #+#    #+#             */
/*   Updated: 2024/06/13 18:33:58 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intVal)
{
	std::cout << "Int constructor called" << std::endl;
	_fixedPointValue = intVal << _fractionalBits;
}

Fixed::Fixed(const float floatVal)
{
	std::cout << "Float constructor called" << std::endl;
	_fixedPointValue = roundf(floatVal * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_fixedPointValue = other.getRawBits();
	}
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	return this->_fixedPointValue;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)this->_fixedPointValue / (1 << _fractionalBits);
}

int		Fixed::toInt(void) const
{
	return this->_fixedPointValue >> _fractionalBits;
}

bool Fixed::operator>(const Fixed& other) const {
    return this->_fixedPointValue > other._fixedPointValue;
}

bool Fixed::operator<(const Fixed& other) const {
    return this->_fixedPointValue < other._fixedPointValue;
}

bool Fixed::operator>=(const Fixed& other) const {
    return this->_fixedPointValue >= other._fixedPointValue;
}

bool Fixed::operator<=(const Fixed& other) const {
    return this->_fixedPointValue <= other._fixedPointValue;
}

bool Fixed::operator==(const Fixed& other) const {
    return this->_fixedPointValue == other._fixedPointValue;
}

bool Fixed::operator!=(const Fixed& other) const {
    return this->_fixedPointValue != other._fixedPointValue;
}

Fixed Fixed::operator+(const Fixed& other) const {
    Fixed result;
    result.setRawBits(this->_fixedPointValue + other.getRawBits());
    return result;
}

Fixed Fixed::operator-(const Fixed& other) const {
    Fixed result;
    result.setRawBits(this->_fixedPointValue - other.getRawBits());
    return result;
}

Fixed Fixed::operator*(const Fixed& other) const {
    Fixed result;
    result.setRawBits((this->_fixedPointValue * other.getRawBits()) >> _fractionalBits);
    return result;
}

Fixed Fixed::operator/(const Fixed& other) const {
    Fixed result;
    result.setRawBits((this->_fixedPointValue << _fractionalBits) / other.getRawBits());
    return result;
}

Fixed& Fixed::operator++() { // Prefix increment
    ++_fixedPointValue;
    return *this;
}

Fixed Fixed::operator++(int) { // Postfix increment
	Fixed tmp(*this);
	++_fixedPointValue;
	return tmp;
}

Fixed& Fixed::operator--() { // Prefix decrement
	--_fixedPointValue;
	return *this;
}

Fixed Fixed::operator--(int) { // Postfix decrement
	Fixed tmp(*this);
	--_fixedPointValue;
	return tmp;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

