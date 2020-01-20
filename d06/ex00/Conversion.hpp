/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 13:06:57 by malluin           #+#    #+#             */
/*   Updated: 2020/01/20 17:27:23 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTOR_HPP
# define CONVERTOR_HPP

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <cmath>
#include <sstream>
#include <float.h>

class	Conversion
{
	public:
		Conversion(void);
		~Conversion(void);
		static char ConvertToChar(void * val, std::string type);
		static int ConvertToInt(void * val, std::string type);
		static float ConvertToFloat(void * val, std::string type);
		static double ConvertToDouble(void * val, std::string type);

	class NonDisplayable : std::exception
	{
		public:
			NonDisplayable();
			~NonDisplayable() throw();
			virtual const char * what() const throw();
			NonDisplayable(NonDisplayable const & instance);
			NonDisplayable	& operator=(NonDisplayable const & rhs);
	};
	class Impossible : std::exception
	{
		public:
			Impossible();
			~Impossible() throw();
			virtual const char * what() const throw();
			Impossible(Impossible const & instance);
			Impossible	& operator=(Impossible const & rhs);
	};
	private:
		Conversion(Conversion const & instance);
		Conversion	& operator=(Conversion const & rhs);
};

#endif
