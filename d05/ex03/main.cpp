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


int		main()
{
	Intern  someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	Bureaucrat	best("Hermes", 1);

	rrf->beSigned(best);
	rrf->execute(best);
	rrf->execute(best);

	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	rrf->beSigned(best);

	rrf->execute(best);
	rrf->execute(best);

	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	rrf->beSigned(best);

	rrf->execute(best);
	rrf->execute(best);
	return 1;
}
