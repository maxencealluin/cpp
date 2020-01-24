/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 13:05:16 by malluin           #+#    #+#             */
/*   Updated: 2020/01/20 13:05:17 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock() : _intern(NULL), _sbureaucrat(NULL), _ebureaucrat(NULL){}

OfficeBlock::OfficeBlock(Intern * intern, Bureaucrat * sbur, Bureaucrat * ebur) :
_intern(intern), _sbureaucrat(sbur), _ebureaucrat(ebur)
{

}

OfficeBlock::~OfficeBlock() {}

void	OfficeBlock::setNewIntern(Intern * intern)
{
	this->_intern = intern;
}


void	OfficeBlock::setNewSBureaucrat(Bureaucrat * bur)
{
	this->_sbureaucrat = bur;
}

void	OfficeBlock::setNewEBureaucrat(Bureaucrat * bur)
{
	this->_ebureaucrat = bur;
}

Intern *		OfficeBlock::getIntern()
{
	return this->_intern;
}
Bureaucrat *	OfficeBlock::getSBur()
{
	return this->_sbureaucrat;
}
Bureaucrat *	OfficeBlock::getEBur()
{
	return this->_ebureaucrat;
}

void	OfficeBlock::doBureaucracy(std::string formName, std::string target)
{
	if ((this->_intern == NULL) || (this->_sbureaucrat == NULL) || (this->_ebureaucrat == NULL))
	{
		std::cout << "Error ! Lacks employee." << std::endl;
		throw(BureaucracyException());
		return;
	}
	try
	{
		Form * form = this->_intern->makeForm(formName, target);
		if (!form)
			throw(std::exception());
		form->beSigned(*(this->_sbureaucrat));
		form->execute(*(this->_ebureaucrat));
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "Form processing has failed" << std::endl;
		throw(BureaucracyException());
	}
}


OfficeBlock::BureaucracyException::BureaucracyException() {}
OfficeBlock::BureaucracyException::~BureaucracyException() throw() {}

OfficeBlock::BureaucracyException::BureaucracyException(BureaucracyException const & instance)
{
	*this = instance;
}
OfficeBlock::BureaucracyException & OfficeBlock::BureaucracyException::operator=(BureaucracyException const & rhs)
{
	(void)rhs;
	return *this;
}

const char* OfficeBlock::BureaucracyException::what() const throw()
{
	return ("Can't do bureaucracy ! Must be past 4 PM...");
}
