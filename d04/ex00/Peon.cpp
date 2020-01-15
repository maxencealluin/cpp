/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 12:04:58 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 13:27:28 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)//, _name(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon & instance) : Victim(instance)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon & Peon::operator=(Peon & rhs)
{
	this->_name = rhs._name;
	return *this;
}

void	Peon::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}

std::string Peon::getName() const { return this->_name;}

std::ostream & operator<<(std::ostream & stream, Peon const & rhs)
{
	stream << "I'm " << rhs.getName() << " and I like otters !" << std::endl;
	return stream;
}
