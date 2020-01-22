/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 13:56:05 by malluin           #+#    #+#             */
/*   Updated: 2020/01/22 16:18:57 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
	public:
		Array();
		~Array();
		Array(unsigned int);
		Array(Array const &);
		unsigned int getSize();
		Array & operator=(Array const & rhs);
		unsigned int		size() const;
		T & operator[](unsigned int) const;
		T & operator[](int) const;

	private:
		unsigned int _size;
		T  * _data;
};

#endif
