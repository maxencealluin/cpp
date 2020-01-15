/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:11:19 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 15:55:31 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : _name(name),
	_ap(40), _weapon(NULL)
{

}

Character::~Character()
{

}

Character & Character::operator=(Character & rhs)
{
	this->_name = rhs._name;
	this->_ap = rhs._ap;
	this->_weapon = rhs._weapon;
	return *this;
}

void Character::recoverAP()
{
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
}

void Character::equip(AWeapon* weapon)
{
	this->_weapon = weapon;
}

void Character::attack(Enemy* enemy)
{
	if (!(this->_weapon))
	{
		std::cout << "No Weapon equiped" << std::endl;
		return;
	}
	if (this->_ap < this->_weapon->getAPCost())
	{
		std::cout << "Not enough AP" << std::endl;
		return;
	}
	std::cout << this->_name << " attacks " << enemy->getType()
		<< " with a " << this->_weapon->getName() << std::endl;
	this->_weapon->attack();
	enemy->takeDamage(this->_weapon->getDamage());
	this->_ap -= this->_weapon->getAPCost();
	if (enemy->getHP() <= 0)
		delete enemy;
}

std::string Character::getName() const
{
	return this->_name;
}

int Character::getAp() const
{
	return this->_ap;
}

AWeapon * Character::getWeapon() const
{
	return this->_weapon;
}

std::ostream & operator<<(std::ostream & stream, Character & rhs)
{
	if (rhs.getWeapon())
		stream << rhs.getName() << " has " << rhs.getAp() << " AP and wields a "
			<< rhs.getWeapon()->getName() << std::endl;
	else
		stream << rhs.getName() << " has " << rhs.getAp()
			<< " AP and is unarmed" << std::endl;
	return stream;
}
