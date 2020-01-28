/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 12:09:11 by malluin           #+#    #+#             */
/*   Updated: 2020/01/28 13:55:01 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int N) : _N(N), _current(0)
{
}

Span::~Span() {}

void			Span::addNumber(int nb)
{
	if (this->_current < this->_N)
		this->_vec.push_back(nb);
	else
		throw(std::exception());
	this->_current += 1;
}

unsigned int	Span::shortestSpan()
{
	int		min = -1;

	if (this->_current <= 1)
		throw(std::exception());
	std::vector<int>::const_iterator it;
	std::vector<int>::const_iterator it2;
	std::vector<int>::const_iterator ite = this->_vec.end();
	for (it = this->_vec.begin(); it < ite; ++it)
		for (it2 = this->_vec.begin(); it2 < ite ; ++it2)
		{
			if (it == it2)
				continue;
			if ((min == -1 || *it - *it2 < min) && *it - *it2 >= 0)
				min = *it - *it2;
			else if ((min == -1 || *it2 - *it < min) && *it2 - *it >= 0)
				min = *it2 - *it;
		}
	return min;
}

unsigned int	Span::longestSpan()
{
	if (this->_current <= 1)
		throw(std::exception());
	return *max_element(this->_vec.begin(), this->_vec.end()) - *min_element(this->_vec.begin(), this->_vec.end());
}

Span::Span(Span const & instance)
{
	*this = instance;
}

Span & Span::operator=(Span const & rhs)
{
	this->_vec = rhs._vec;
	this->_N = rhs._N;
	this->_current = rhs._current;
	return *this;
}
