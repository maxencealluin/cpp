/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:01:58 by malluin           #+#    #+#             */
/*   Updated: 2020/01/24 14:07:29 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bullet.hpp"

Bullet::Bullet(const char *skin, int x, int y, int dir) :
	AMovingEntity(x, y, dir), _alive(1)
{
	this->_skin = skin;
	this->_bulletSkin = skin;
}

Bullet::~Bullet()
{
}

void	Bullet::getHit()
{
	this->_alive = 0;
}

int		Bullet::getDir() { return this->_dir;}

// const char * Bullet::getBulletSkin() { return this->_skin;}


void	Bullet::move(int xdiff, int ydiff)
{
	if (this->_pos.x + xdiff > 0
		&& this->_pos.x + xdiff < (COLS - 1))
		this->_pos.x += xdiff;
	if (this->_pos.y + ydiff > WALL_THICK
		&& this->_pos.y + ydiff < LINES - WALL_THICK - 1)
		this->_pos.y += ydiff;
}
