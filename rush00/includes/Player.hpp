/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:00:09 by malluin           #+#    #+#             */
/*   Updated: 2020/01/24 13:46:06 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_HPP
# define PLAYER_HPP

#include "AMovingEntity.hpp"
#include "resources.hpp"

class Player : public AMovingEntity {
	public:
		Player();
		~Player();
		void	getHit();
		void	move(int, int);
		// const char * getBulletSkin();

	private:
		Player(Player & instance);
		Player & operator=(Player & rhs);
		bool _alive;
};

#endif
