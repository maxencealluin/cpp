/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 15:00:25 by malluin           #+#    #+#             */
/*   Updated: 2020/01/16 15:59:53 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
Form("Anonymous", target, 72, 45)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	Form::operator = (rhs);
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << "Brrrrrrrrr... Ziiiiiiiiiing... Frrrrrrr..." << std::endl;
	if (std::rand() % 2 == 0)
		std::cout << executor.getName() << " has been robotomized successfully !" << std::endl;
	else
		std::cout << "Catastrophic failure !" << std::endl;
}
