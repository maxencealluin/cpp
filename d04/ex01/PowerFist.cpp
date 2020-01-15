/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 13:54:33 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 15:48:57 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() :	AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(PowerFist const & instance) : AWeapon(instance)
{
}

PowerFist::~PowerFist()
{
}

PowerFist & PowerFist::operator=(PowerFist const & rhs)
{
	AWeapon::operator = (rhs);
	return *this;
}


void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
