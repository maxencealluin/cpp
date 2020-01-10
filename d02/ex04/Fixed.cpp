/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 11:21:52 by malluin           #+#    #+#             */
/*   Updated: 2020/01/10 16:15:57 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::_nb_fractionals = 8;

Fixed::Fixed(void)
{
	this->_fpvalue = 0;
}

Fixed::Fixed(Fixed const & instance)
{
	*this = instance;
}

Fixed::Fixed(int const val)
{
	this->_fpvalue =  val << Fixed::_nb_fractionals;
}

Fixed::Fixed(float const val)
{
	this->_fpvalue = roundf(val * (1 << Fixed::_nb_fractionals));
}

float 	Fixed::toFloat( void ) const
{
	return (float)(this->_fpvalue) / (1 << Fixed::_nb_fractionals);

}

int 	Fixed::toInt( void ) const
{
	return this->_fpvalue >> Fixed::_nb_fractionals;
}

Fixed::~Fixed(void)
{
}

int		Fixed::getRawBits( void ) const
{
	return this->_fpvalue;
}

void	Fixed::setRawBits( int const raw )
{
	this->_fpvalue = raw;
}

Fixed & Fixed::min(Fixed & val_a, Fixed & val_b)
{
	if (val_a < val_b)
		return val_a;
	return val_b;
}

Fixed & Fixed::max(Fixed & val_a, Fixed & val_b)
{
	if (val_a > val_b)
		return val_a;
	return val_b;
}

const Fixed & Fixed::min(Fixed const & val_a, Fixed const & val_b)
{
	if (val_a.getRawBits() < val_b.getRawBits())
		return val_a;
	return val_b;
}

const Fixed & Fixed::max(Fixed const & val_a, Fixed const & val_b)
{
	if (val_a.getRawBits() > val_b.getRawBits())
		return val_a;
	return val_b;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fpvalue = rhs.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream & stream, Fixed const & rhs)
{
	stream << rhs.toFloat();
	return stream;
}

bool	Fixed::operator>( Fixed const & rhs)
{
	if (this->getRawBits() > rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<( Fixed const & rhs)
{
	if (this->getRawBits() < rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator==( Fixed const & rhs)
{
	if (this->getRawBits() == rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator!=( Fixed const & rhs)
{
	if (this->getRawBits() == rhs.getRawBits())
		return false;
	return true;
}

bool Fixed::operator>=( Fixed const & rhs)
{
	if (this->getRawBits() >= rhs.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<=( Fixed const & rhs)
{
	if (this->getRawBits() <= rhs.getRawBits())
		return true;
	return false;
}

Fixed Fixed::operator+( Fixed const & rhs)
{
	return Fixed(rhs.toFloat() + this->toFloat());
}
//
Fixed Fixed::operator-( Fixed const & rhs)
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*( Fixed const & rhs)
{
	return Fixed(rhs.toFloat() * this->toFloat());
	// Fixed test;
	// test.setRawBits(rhs.getRawBits() * this->getRawBits());
	// return test;
}

Fixed	Fixed::operator/( Fixed const & rhs)
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

float	Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return this->toFloat();
}

float	Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return this->toFloat();
}

float	Fixed::operator++(int)
{
	float val;

	val = this->toFloat();
	this->_fpvalue += 1;
	return val;
}

float	Fixed::operator--(int)
{
	float val;

	val = this->toFloat();
	this->_fpvalue -= 1;
	return val;
}
