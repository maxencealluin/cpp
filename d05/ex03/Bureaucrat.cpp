/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 11:28:30 by malluin           #+#    #+#             */
/*   Updated: 2020/01/16 16:25:15 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	if (this->_grade > 150)
		throw(Bureaucrat::GradeTooLowException());
}

Bureaucrat::~Bureaucrat() {}

std::string	Bureaucrat::getName() const
{
	return this->_name;
}

int			Bureaucrat::getGrade() const
{
	return this->_grade;
}

void		Bureaucrat::increaseGrade()
{
	if (this->_grade <= 1)
		throw(Bureaucrat::GradeTooHighException());
	this->_grade -= 1;
}

void		Bureaucrat::decreaseGrade()
{
	if (this->_grade >= 150)
		throw(Bureaucrat::GradeTooLowException());
	this->_grade += 1;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	this->_grade = rhs.getGrade();
	return *this;
}

std::ostream &	operator<<(std::ostream & stream, Bureaucrat const & rhs)
{
	stream << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return stream;
}

void	Bureaucrat::signForm(bool success, Form const & form)
{
	if (success)
		std::cout << this->_name << " signs form " << form.getName() << std::endl;
	else
	{
		std::cout << this->_name << " cannot sign form " << form.getName();
		if (form.getSigned() == true)
			std::cout << " because it is already signed." << std::endl;
		else
			std::cout << " because his grade is too low." << std::endl;
	}

}

void	Bureaucrat::executeForm(Form const & form)
{
	form.execute(*this);
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & instance)
{
	*this = instance;
}
//
Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const & rhs)
{
	(void)rhs;
	return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error, Bureaucrat grade is too high, maximum is 1.");
}


Bureaucrat::GradeTooLowException::GradeTooLowException() {}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const & instance)
{
	*this = instance;
}
Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const & rhs)
{
	(void)rhs;
	return *this;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error, Bureaucrat grade is too low, minimum is 150.");
}
