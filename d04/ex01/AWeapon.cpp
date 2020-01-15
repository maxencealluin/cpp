/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 13:46:56 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 14:00:58 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
	_name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::AWeapon(AWeapon const & instance)
{
	*this = instance;
}

AWeapon::~AWeapon()
{
}

AWeapon & AWeapon::operator=(AWeapon const & rhs)
{
	this->_name = rhs._name;
	this->_damage = rhs._damage;
	this->_apcost = rhs._apcost;
	return *this;
}

std::string AWeapon::AWeapon::getName() const
{
	return this->_name;
}

int AWeapon::getAPCost() const
{
	return this->_apcost;
}

int AWeapon::getDamage() const
{
	return this->_damage;
}
