/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 11:22:11 by malluin           #+#    #+#             */
/*   Updated: 2020/01/16 16:27:55 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int		main()
{
	std::cout << "PRESIDENTIAL" << std::endl;
	PresidentialPardonForm form("Criminal");
	Bureaucrat bur("Best", 1);
	Bureaucrat bur2("Loser", 150);

	try
	{
		form.beSigned(bur2);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	form.beSigned(bur);
	try
	{
		form.execute(bur2);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	form.execute(bur);

	std::cout << std::endl << std::endl << "ROBOTOMY" << std::endl;

	RobotomyRequestForm rform("Victim");

	try
	{
		rform.beSigned(bur2);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	rform.beSigned(bur);
	try
	{
		rform.execute(bur2);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	rform.execute(bur);

	rform.execute(bur);
	rform.execute(bur);
	rform.execute(bur);

	std::cout << std::endl << std::endl << "SHRUBBERY" << std::endl;

	ShrubberyCreationForm sform("test");

	sform.beSigned(bur);
	sform.execute(bur);

	ShrubberyCreationForm sform2("test2");

	sform2.beSigned(bur);
	bur.executeForm(sform2);
	return 1;
}
