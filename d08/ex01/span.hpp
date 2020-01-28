/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 12:09:10 by malluin           #+#    #+#             */
/*   Updated: 2020/01/28 13:51:58 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>


class Span {
	public:
		Span(unsigned int);
		~Span();
		Span(Span const & instance);
		Span & operator=(Span const & rhs);
		void			addNumber(int);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();

	private:
		std::vector<int>	_vec;
		unsigned	int		_N;
		unsigned	int		_current;
		Span();


};

#endif
