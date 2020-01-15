/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 13:54:33 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 15:08:20 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type)
{
}

Enemy::Enemy(Enemy const & instance)
{
	*this = instance;
}

Enemy::~Enemy()
{
}

Enemy & Enemy::operator=(Enemy const & rhs)
{
	this->_hp = rhs._hp;
	this->_type = rhs._type;
	return *this;
}

std::string	Enemy::getType() const
{
	return this->_type;
}

int			Enemy::getHP() const
{
	return this->_hp;
}

void Enemy::takeDamage(int damage)
{
	if (damage > 0)
		this->_hp -= damage;
}

void	Enemy::setHP(int nb)
{
	this->_hp = nb;
}
