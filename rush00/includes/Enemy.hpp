/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:00:09 by malluin           #+#    #+#             */
/*   Updated: 2020/01/24 15:21:46 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include "AMovingEntity.hpp"
#include "resources.hpp"

class Enemy : public AMovingEntity {
	public:
		Enemy(int, int);
		~Enemy();
		void	getHit();
		void	move(int, int);
		// const char * getBulletSkin();

	private:
		Enemy();
		Enemy(Enemy & instance);
		Enemy & operator=(Enemy & rhs);
		bool _alive;
};

#endif
