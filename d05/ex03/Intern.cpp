/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 17:31:43 by malluin           #+#    #+#             */
/*   Updated: 2020/01/16 17:42:49 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {std::cout << "Welcome new Intern !" << std::endl;}

Intern::~Intern() {std::cout << "Sorry I can't pay you anymore !" << std::endl;}

Intern &	Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return *this;
}

Form * Intern::makeForm(std::string type, std::string target) const
{
	Form	*ptr = NULL;

	if (type == "presidential pardon")
		ptr = new PresidentialPardonForm(target);
	else if (type == "robotomy request")
		ptr = new RobotomyRequestForm(target);
	else if (type == "shrubbery creation")
		ptr = new ShrubberyCreationForm(target);
	return ptr;
}
