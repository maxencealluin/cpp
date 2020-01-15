/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:20:59 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 18:03:24 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

int		AssaultTerminator::_nextId = 0;

AssaultTerminator::AssaultTerminator() : _id(AssaultTerminator::_nextId)
{
	AssaultTerminator::_nextId++;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & instance)
{
	*this = instance;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator & AssaultTerminator::operator=(AssaultTerminator const & rhs)
{
	this->_id = rhs._id;;
	return *this;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be back ..." << std::endl;
}

AssaultTerminator* AssaultTerminator::clone() const
{
	AssaultTerminator *clone =  new AssaultTerminator();
	*clone = *this;
	return clone;
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;

}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}
