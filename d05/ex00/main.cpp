/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 11:22:11 by malluin           #+#    #+#             */
/*   Updated: 2020/01/16 14:29:55 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main()
{
	Bureaucrat test("Hermes", 149);
	test.increaseGrade();
	std::cout << test;
	test.increaseGrade();
	std::cout << test;
	for (int i = 0; i < 150; i++)
	{
		try
		{
			std::cout << test;
			test.decreaseGrade();
		}
		catch(std::exception & e)
		{
			std::cout << e.what() << std::endl;
			break;
		}
	}
	try
	{
		Bureaucrat crash("Hermes", -12);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 1;
}
