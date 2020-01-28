/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 12:09:12 by malluin           #+#    #+#             */
/*   Updated: 2020/01/28 13:55:42 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		main()
{
	Span spa(5);

	spa.addNumber(3);
	spa.addNumber(8);
	spa.addNumber(453);
	spa.addNumber(953);
	spa.addNumber(1024);
	try {
		spa.addNumber(42);
		spa.addNumber(42);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "shortest " << spa.shortestSpan() << std::endl;;
	std::cout << "longest " << spa.longestSpan() << std::endl;;

	std::cout << std::endl << "MAIN SUJET" << std::endl;
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

}
