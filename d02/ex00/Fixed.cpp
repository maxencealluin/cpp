/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 11:21:52 by malluin           #+#    #+#             */
/*   Updated: 2020/01/10 12:07:15 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::nb_fractionals = 8;

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

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
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
