/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:01:58 by malluin           #+#    #+#             */
/*   Updated: 2020/01/24 15:10:28 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"

Player::Player() : AMovingEntity(10, 30, 1), _alive(1)
{
	this->_skin = ">";
	this->_bulletSkin = "=";
}

Player::~Player()
{
}

void	Player::getHit()
{
	this->_alive = 0;
}

// const char * Player::getBulletSkin() { return this->_bulletSkin;}


void	Player::move(int xdiff, int ydiff)
{
	if (this->_pos.x + xdiff > 0
		&& this->_pos.x + xdiff < (COLS - 1))
		this->_pos.x += xdiff;
	if (this->_pos.y + ydiff > WALL_THICK
		&& this->_pos.y + ydiff < LINES - WALL_THICK - 1)
		this->_pos.y += ydiff;
}
