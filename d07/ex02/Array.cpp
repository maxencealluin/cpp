/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 14:43:57 by malluin           #+#    #+#             */
/*   Updated: 2020/01/22 16:24:39 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _size(0) { this->_data = new T[0]();}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n) { this->_data = new T[n]();}

template <typename T>
Array<T>::Array(Array const & instance) { *this = instance; }

template <typename T>
Array<T> & Array<T>::operator=(Array const & rhs)
{
	this->_size = rhs.size();
	this->_data = new T[this->_size]();
	for (unsigned int i = 0; i < this->_size; i++)
		this->_data[i] = rhs[i];
	return *this;
}

template <typename T>
Array<T>::~Array() {}

template <typename T>
unsigned int Array<T>::size() const { return this->_size; }

template <typename T>
T & Array<T>::operator[](unsigned int index) const
{
	if (static_cast<unsigned int>(index) < this->_size)
		return this->_data[index];
	else
		throw(std::exception());
}

template <typename T>
T & Array<T>::operator[](int index) const
{
	if (static_cast<int>(index) < this->_size)
		return this->_data[index];
	else
		throw(std::exception());
}
