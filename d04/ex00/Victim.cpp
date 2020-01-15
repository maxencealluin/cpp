/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 12:04:58 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 13:27:34 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
}

Victim::Victim(Victim & instance)
{
	*this = instance;
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
}

Victim & Victim::operator=(Victim & rhs)
{
	this->_name = rhs._name;
	return *this;
}

void	Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

std::string Victim::getName() const { return this->_name;}

std::ostream & operator<<(std::ostream & stream, Victim const & rhs)
{
	stream << "I'm " << rhs.getName() << " and I like otters !" << std::endl;
	return stream;
}
