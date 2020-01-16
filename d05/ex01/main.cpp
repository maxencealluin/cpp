/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 11:22:11 by malluin           #+#    #+#             */
/*   Updated: 2020/01/16 14:52:58 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main()
{
	std::cout << "BAD RANGE:" << std::endl;
	try
	{
		Bureaucrat 	bur("Hermes", 0);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form		formulaire("tax", 151, 1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	Bureaucrat 	bur("Hermes", 11);
	Form		formulaire("tax", 75, 1);
	Bureaucrat 	bur2("Joe", 85);

	std::cout << "\nGRADE TOO LOW:" << std::endl;
	std::cout << formulaire;
	try
	{
		std::cout << bur2;
		formulaire.beSigned(bur2);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\nSIGNS TWICE:" << std::endl;
	std::cout << formulaire;
	std::cout << bur;
	formulaire.beSigned(bur);
	formulaire.beSigned(bur);
	std::cout << formulaire;
	return 1;
}
