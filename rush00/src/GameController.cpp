/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameController.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 15:38:57 by malluin           #+#    #+#             */
/*   Updated: 2020/01/24 17:29:46 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GameController.hpp"

GameController::GameController(TScreen & screen)
: _screen(screen), _nbEntities(1), _nbBullets(0)
{
	this->_player = new Player;
	this->_entities[0] = this->_player;
	for (int i = 1; i < MAX_ENTITIES; i++)
		this->_entities[i] = NULL;
	for (int i = 0; i < MAX_BULLETS; i++)
		this->_bullets[i] = NULL;
}

GameController::~GameController()
{
}

void	GameController::initialize_game()
{
	this->_screen.refresh_screen();
	game_loop(-1);
}


void	GameController::shoot_bullet(AMovingEntity * entity)
{
	int i = -1;

	while(++i < MAX_BULLETS)
		if (this->_bullets[i] == NULL)
			break;
	if (i != MAX_BULLETS)
	{
		this->_bullets[i] = new Bullet(entity->getBulletSkin(),\
			entity->getPos().x + 1, entity->getPos().y, 1);
	}
}

void	GameController::spawn_enemies()
{
	int i = -1;

	while(++i < MAX_ENTITIES)
		if (this->_entities[i] == NULL)
			break;
	if (i != MAX_ENTITIES)
	{
		this->_entities[i] = new Enemy(
			COLS - 1, WALL_THICK + 1 + std::rand() % (LINES - 2 * WALL_THICK - 1));
	}
}

void	GameController::hide_entities()
{
	for (int i = 0; i < MAX_ENTITIES; i++)
		if (this->_entities[i])
			this->_screen.draw_entity(this->_entities[i], " ");
	for (int i = 0; i < MAX_BULLETS; i++)
		if (this->_bullets[i])
			this->_screen.draw_entity(this->_bullets[i], " ");
}

void	GameController::draw_entities()
{
	for (int i = 0; i < MAX_ENTITIES; i++)
		if (this->_entities[i])
			this->_screen.draw_entity(this->_entities[i]);
	for (int i = 0; i < MAX_BULLETS; i++)
		if (this->_bullets[i])
			this->_screen.draw_entity(this->_bullets[i]);
}

bool	GameController::check_alive(AMovingEntity * entity) const
{
	int x = entity->getPos().x;
	int y = entity->getPos().y;

	if (x <= 0 || x >= COLS - 1 || y <= WALL_THICK || y >= LINES - WALL_THICK - 1)
	{
		return false;
	}
	return true;
}

void	GameController::check_collisions_bullets()
{
	for (int i = 1; i < MAX_ENTITIES; i++)
	{
		if (!this->_entities[i])
			continue;
		for (int j = 0; j < MAX_BULLETS; j++)
		{
			if (!this->_bullets[j])
				continue;
			if(this->_entities[i]->getPos().x == this->_bullets[j]->getPos().x
				&& this->_entities[i]->getPos().y == this->_bullets[j]->getPos().y)
			{
				destroy_entity(i);
				destroy_bullet(j);
				break;
			}
		}
	}
}

void	GameController::check_collisions_entities()
{
	for (int i = 1; i < MAX_ENTITIES; i++)
	{
		if (!this->_entities[i])
			continue;
		if(this->_entities[i]->getPos().x == this->_entities[0]->getPos().x
			&& this->_entities[i]->getPos().y == this->_entities[0]->getPos().y)
		{
			destroy_entity(i);
			destroy_entity(0);
			this->_player = NULL;
			break;
		}
	}
}

bool	GameController::game_loop(int ch)
{
	hide_entities();
	if (std::rand() % 2 == 0)
		spawn_enemies();
	move_bullets();
	check_collisions_bullets();
	move_entities(ch);
	check_collisions_bullets();
	check_collisions_entities();
	draw_entities();
	if (this->_player == NULL)
		return 0;
	return 1;
}

void	GameController::destroy_entity(int i)
{
	delete this->_entities[i];
	this->_entities[i] = NULL;
}

void	GameController::destroy_bullet(int i)
{
	delete this->_bullets[i];
	this->_bullets[i] = NULL;
}


void	GameController::move_bullets()
{
	for (int i = 0; i < MAX_BULLETS; i++)
		if (this->_bullets[i])
		{
			this->_bullets[i]->move();
			if(!check_alive(this->_bullets[i]))
				destroy_bullet(i);
		}
}

void	GameController::move_entities(int ch)
{
	if (ch == KEY_UP)
		this->_player->move(0, -1);
	else if (ch == KEY_DOWN)
		this->_player->move(0, 1);
	else if (ch == KEY_LEFT)
		this->_player->move(-1, 0);
	else if (ch == KEY_RIGHT)
		this->_player->move(1, 0);
	else if (ch == KEY_SPACE)
		this->shoot_bullet(this->_player);
	for (int i = 1; i < MAX_ENTITIES; i++)
		if (this->_entities[i])
		{
			this->_entities[i]->move();
			if(!check_alive(this->_entities[i]))
				destroy_entity(i);
		}
}
