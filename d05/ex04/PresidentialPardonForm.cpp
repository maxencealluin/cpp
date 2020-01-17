/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 15:00:25 by malluin           #+#    #+#             */
/*   Updated: 2020/01/16 16:00:48 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
Form("Anonymous", target, 25, 5)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	Form::operator = (rhs);
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
