/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 11:28:30 by malluin           #+#    #+#             */
/*   Updated: 2020/01/16 14:30:05 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::~Bureaucrat()
{

}

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
