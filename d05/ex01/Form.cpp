/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 11:22:44 by malluin           #+#    #+#             */
/*   Updated: 2020/01/16 14:50:46 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int sgrade, int egrade) :
_name(name), _grade_sign(sgrade), _grade_exec(egrade), _signed(false)
{
	if (this->_grade_sign < 1 || this->_grade_exec < 1)
		throw(Form::GradeTooHighException());
	if (this->_grade_sign > 150 || this->_grade_exec > 150)
		throw(Form::GradeTooLowException());
}

Form::~Form() {}

std::string			Form::getName() const
{
	return this->_name;
}

int					Form::getGradeSign() const
{
	return this->_grade_sign;
}

int					Form::getGradeExec() const
{
	return this->_grade_exec;
}

bool				Form::getSigned() const
{
	return this->_signed;
}


void				Form::beSigned(Bureaucrat & bureaucrat)
{
	if (this->_grade_sign >= bureaucrat.getGrade())
	{
		if (this->_signed == true)
		{
			bureaucrat.signForm(false, *this);
		}
		else
		{
			bureaucrat.signForm(true, *this);
			this->_signed = true;
		}
	}
	else
	{
		bureaucrat.signForm(false, *this);
		throw(Form::GradeTooLowException());
	}
}

Form &				Form::operator=(Form const & rhs)
{
	this->_signed = rhs.getSigned();
	return *this;
}

std::ostream &		operator<<(std::ostream & stream, Form const & rhs)
{
	stream << "Form name: " <<  rhs.getName() << ", sign grade: " << rhs.getGradeSign()
		<< ", execution grade: " << rhs.getGradeExec()
		<< ", signed: " << rhs.getSigned() << std::endl;
	return stream;
}

Form::GradeTooHighException::GradeTooHighException() {}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const & instance)
{
	*this = instance;
}
//
Form::GradeTooHighException & Form::GradeTooHighException::operator=(GradeTooHighException const & rhs)
{
	(void)rhs;
	return *this;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Error, grade is too high");
}

Form::GradeTooLowException::GradeTooLowException() {}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const & instance)
{
	*this = instance;
}
Form::GradeTooLowException & Form::GradeTooLowException::operator=(GradeTooLowException const & rhs)
{
	(void)rhs;
	return *this;
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Error, grade is too low");
}
