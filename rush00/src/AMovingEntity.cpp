/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMovingEntity.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:08:51 by malluin           #+#    #+#             */
/*   Updated: 2020/01/23 17:50:31 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMovingEntity.hpp"

AMovingEntity::AMovingEntity() : _skin("."), _color("white")
{
	this->_pos.x = 0;
	this->_pos.y = 0;
}

AMovingEntity::AMovingEntity(int x, int y) : _skin("."), _color("white")
{
	this->_pos.x = x;
	this->_pos.y = y;
}

AMovingEntity::~AMovingEntity() {}

const char * AMovingEntity::getSkin() const { return this->_skin; }
std::string AMovingEntity::getColor() const { return this->_color; }
t_pos &	AMovingEntity::getPos() { return this->_pos; }

void AMovingEntity::getHit() {
	;
}
