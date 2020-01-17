/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 11:22:11 by malluin           #+#    #+#             */
/*   Updated: 2020/01/16 17:43:10 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"


int		main()
{
	OfficeBlock block;
	Bureaucrat * sbur = new Bureaucrat("signator", 1);
	Bureaucrat * ebur = new Bureaucrat("executor", 1);
	Intern *	intern = new Intern();

	block.setNewIntern(intern);
	block.setNewSBureaucrat(sbur);
	block.setNewEBureaucrat(ebur);


	try
	{
		block.doBureaucracy("presidential pardon", "Criminal");
		std::cout << std::endl;
		block.doBureaucracy("robotomy request", "Bender");
		std::cout << std::endl;
		block.doBureaucracy("test", "killer");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
	}

	std::cout << "=====NEW UNQUALIFIED BUREAUCRAT=====" << std::endl;
	Bureaucrat * ebur2 = new Bureaucrat("executor", 100);

	block.setNewEBureaucrat(ebur2);
	
	try
	{
		block.doBureaucracy("presidential pardon", "Criminal");
		std::cout << std::endl;
		block.doBureaucracy("robotomy request", "Bender");
		std::cout << std::endl;
		block.doBureaucracy("test", "killer");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	block.setNewEBureaucrat(NULL);
	try
	{
		block.doBureaucracy("robotomy request", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 1;
}
