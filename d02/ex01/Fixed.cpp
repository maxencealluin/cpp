/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 11:21:52 by malluin           #+#    #+#             */
/*   Updated: 2020/01/10 15:05:26 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::_nb_fractionals = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_fpvalue = 0;
}

Fixed::Fixed(Fixed const & instance)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = instance;
}

Fixed::Fixed(int const val)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fpvalue =  val << Fixed::_nb_fractionals;
}

Fixed::Fixed(float const val)
{
	std::cout << "Float constructor called" << std::endl;
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
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const
{
	return this->_fpvalue;
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fpvalue = raw;
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
