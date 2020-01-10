/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 11:21:54 by malluin           #+#    #+#             */
/*   Updated: 2020/01/10 14:08:00 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

public:
	Fixed(void);
	Fixed(Fixed const &instance);
	Fixed(int const val);
	Fixed(float const val);
	~Fixed();

	Fixed & operator=(Fixed const & rhs);
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float 	toFloat( void ) const;
	int 	toInt( void ) const;

private:
	int _fpvalue;
	static const int _nb_fractionals;

};


std::ostream & operator<<(std::ostream & stream, Fixed const & rhs);

#endif

//XXXXXXXX XXXXXXXX XXXXXXXX . XXXXXXXX
