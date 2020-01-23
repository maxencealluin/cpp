/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameController.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 15:38:57 by malluin           #+#    #+#             */
/*   Updated: 2020/01/23 17:49:37 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GameController.hpp"

GameController::GameController(TScreen & screen) : _screen(screen)
{
	this->_player = new Player;
	this->_entities[0] = this->_player;
	for (int i = 1; i < MAX_ENTITIES; i++)
		this->_entities[i] = NULL;
	if (!_entities[1])
		std::cout << "a";
}

GameController::~GameController()
{
}

void	GameController::move_entities(int ch)
{
	for (int i = 0; i < MAX_ENTITIES; i++)
		if (this->_entities[i])
			this->_screen.draw_entity(this->_entities[i], " ");
	if (ch == KEY_UP)
		this->_player->move(0, -1);
	else if (ch == KEY_DOWN)
		this->_player->move(0, 1);
	else if (ch == KEY_LEFT)
		this->_player->move(-1, 0);
	else if (ch == KEY_RIGHT)
		this->_player->move(1, 0);
	for (int i = 1; i < MAX_ENTITIES; i++)
		if (this->_entities[i])
			this->_entities[i]->move(-1, 0);
	for (int i = 0; i < MAX_ENTITIES; i++)
		if (this->_entities[i])
			this->_screen.draw_entity(this->_entities[i]);
}
