/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 13:54:33 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 15:46:45 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() :	AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & instance) : AWeapon(instance)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
	AWeapon::operator = (rhs);
	return *this;
}


void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
