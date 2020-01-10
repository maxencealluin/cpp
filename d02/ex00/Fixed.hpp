/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 11:21:54 by malluin           #+#    #+#             */
/*   Updated: 2020/01/10 11:59:34 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
public:
	Fixed(void);
	Fixed(Fixed const &instance);
	~Fixed();
	Fixed & operator=(Fixed const & rhs);
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
private:
	int _fpvalue;
	static const int nb_fractionals;
};

#endif
