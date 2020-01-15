/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:20:59 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 18:08:23 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

int		TacticalMarine::_nextId = 0;

TacticalMarine::TacticalMarine() : _id(TacticalMarine::_nextId)
{
	TacticalMarine::_nextId++;
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & instance)
{
	*this = instance;
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine & TacticalMarine::operator=(TacticalMarine const & rhs)
{
	this->_id = rhs._id;;
	return *this;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ..." << std::endl;
}

ISpaceMarine* TacticalMarine::clone() const
{
	TacticalMarine *clone =  new TacticalMarine();
	*clone = *this;
	return clone;
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT !" << std::endl;

}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with chainsword *" << std::endl;
}
