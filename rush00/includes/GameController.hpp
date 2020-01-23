/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameController.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:03:38 by malluin           #+#    #+#             */
/*   Updated: 2020/01/23 17:54:55 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAMECONTROLLER_HPP
# define GAMECONTROLLER_HPP

#include "Player.hpp"
#include "TScreen.hpp"
#include "resources.hpp"

#define MAX_ENTITIES 10

class GameController {
	public:
		GameController(TScreen &);
		~GameController();
		void	move_entities(int);

	protected:
		GameController();
		GameController(GameController const & instance);
		GameController & operator=(GameController & rhs);
		AMovingEntity *_entities[MAX_ENTITIES];
		Player 		*_player;
		TScreen 	&_screen;
};

#endif
