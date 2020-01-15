/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 11:39:11 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 12:21:15 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name),
	_title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer & instance)
{
	*this = instance;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << ", is dead."
		<< " Consequences will never be the same !" << std::endl;
}

Sorcerer & Sorcerer::operator=(Sorcerer & rhs)
{
	this->_name = rhs._name;
	this->_title = rhs._title;
	return *this;
}

void	Sorcerer::polymorph(Victim const & victim) const
{
	victim.getPolymorphed();
}

std::string Sorcerer::getName() const { return this->_name;}

std::string Sorcerer::getTitle() const { return this->_title;}

std::ostream & operator<<(std::ostream & stream, Sorcerer const & rhs)
{
	stream << "I am " << rhs.getName() << ", " << rhs.getTitle()
		<< ", and I like ponies !" << std::endl;
	return stream;
}
