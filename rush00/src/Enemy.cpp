/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:01:58 by malluin           #+#    #+#             */
/*   Updated: 2020/01/24 15:21:52 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int x, int y) : AMovingEntity(x, y, -1), _alive(1)
{
	this->_skin = "E";
	this->_bulletSkin = "-";
}

Enemy::~Enemy()
{
}

void	Enemy::getHit()
{
	this->_alive = 0;
}

// void	Enemy::move()
// {
// 		this->_pos.x += this->_dir;
// }

// const char * Enemy::getBulletSkin() { return this->_bulletSkin;}

void	Enemy::move(int xdiff, int ydiff)
{
	if (this->_pos.x + xdiff > 0
		&& this->_pos.x + xdiff < (COLS - 1))
		this->_pos.x += xdiff;
	if (this->_pos.y + ydiff > WALL_THICK
		&& this->_pos.y + ydiff < LINES - WALL_THICK - 1)
		this->_pos.y += ydiff;
}
