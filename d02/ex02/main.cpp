/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 11:32:00 by malluin           #+#    #+#             */
/*   Updated: 2020/01/10 16:16:45 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main (void)
{

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c( Fixed( 5.05f ) + Fixed( 2 ) );
	Fixed const d( Fixed( 5.05f ) / Fixed( 2 ) );
	Fixed const e( Fixed( 5.05f ) - Fixed( 2 ) );

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "e: " << e << std::endl;

	std::cout << "max ab " << Fixed::max( a, b ) << std::endl;
	std::cout << "max const bc " << Fixed::max( b, c ) << std::endl;
	std::cout << "min ab " << Fixed::min( a, b ) << std::endl;
	std::cout << "min const bc " << Fixed::min( b, c ) << std::endl;

	std::cout << "== aa " << (a == a) << std::endl;
	std::cout << "== ab " << (a == b) << std::endl;
	std::cout << "!= aa " << (a != a) << std::endl;
	std::cout << "!= ab " << (a != b) << std::endl;

	std::cout << ">= aa " << (a >= a) << std::endl;
	std::cout << ">= ab " << (a >= b) << std::endl;
	std::cout << "<= aa " << (a <= a) << std::endl;
	std::cout << "<= ab " << (a <= b) << std::endl;

	std::cout << "> aa " << (a > a) << std::endl;
	std::cout << "> ab " << (a > b) << std::endl;
	std::cout << "< aa " << (a < a) << std::endl;
	std::cout << "< ab " << (a < b) << std::endl;

	std::cout << "a " << a << std::endl;
	std::cout << "++a " << ++a << std::endl;
	std::cout << "a " << a << std::endl;
	std::cout << "--a " << --a << std::endl;
	std::cout << "a " << a << std::endl;
	std::cout << "a++ " << a++ << std::endl;
	std::cout << "a " << a << std::endl;
	std::cout << "a-- " << a-- << std::endl;
	std::cout << "a " << a << std::endl;

	return 0;
 }
