/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameController.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:03:38 by malluin           #+#    #+#             */
/*   Updated: 2020/01/24 17:20:58 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAMECONTROLLER_HPP
# define GAMECONTROLLER_HPP

#include "Player.hpp"
#include "TScreen.hpp"
#include "resources.hpp"
#include "Bullet.hpp"
#include "Enemy.hpp"

#define MAX_ENTITIES 150
#define MAX_BULLETS 200


class GameController {
	public:
		GameController(TScreen &);
		~GameController();
		void	initialize_game();
		void	hide_entities();
		void	move_entities(int);
		void	move_bullets();
		void	draw_entities();
		bool	game_loop(int);
		void	shoot_bullet(AMovingEntity * );
		bool	check_alive(AMovingEntity * ) const;
		void	check_collisions_bullets();
		void	check_collisions_entities();
		void	destroy_entity(int);
		void	destroy_bullet(int);
		void	spawn_enemies();

	protected:
		GameController();
		GameController(GameController const & instance);
		GameController & operator=(GameController & rhs);
		AMovingEntity *_entities[MAX_ENTITIES];
		AMovingEntity *_bullets[MAX_BULLETS];
		unsigned int _nbEntities;
		unsigned int _nbBullets;
		Player 		*_player;
		TScreen 	&_screen;
};

#endif
