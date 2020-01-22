/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 12:00:35 by malluin           #+#    #+#             */
/*   Updated: 2020/01/22 12:14:30 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T>
void swap(T & a, T & b)
{
	T c;
	c = a;
	a = b;
	b = c;
}

template< typename T>
const T & min(T const & a, T const & b)
{
	if (a < b)
		return a;
	return b;
}

template< typename T>
const T & max(T const & a, T const & b)
{
	if (a > b)
		return a;
	return b;
}


int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min( a, b ) << std::endl;
	std::cout << "max(a, b) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min( c, d ) << std::endl;
	std::cout << "max(c, d) = " << ::max( c, d ) << std::endl;
	return 0;
}

int main2()
{
	int a = 42;
	int b = 21;

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "swapping ..." << std::endl;
	swap<int>(a, b);
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;

	std::cout << "min: " << min<int>(a,b) << std::endl;
	std::cout << "max: " << max<int>(a,b) << std::endl;

	std::cout << std::endl << "With float:" << std::endl;

	float c = 42.12;
	float d = 21.24;

	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "swapping ..." << std::endl;
	swap<float>(c, d);
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;

	std::cout << "min: " << min<float>(c,d) << std::endl;
	std::cout << "max: " << max<float>(c,d) << std::endl;
	return 1;
}
