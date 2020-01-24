/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:00:09 by malluin           #+#    #+#             */
/*   Updated: 2020/01/24 14:07:33 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BULLET_HPP
# define BULLET_HPP

#include "AMovingEntity.hpp"
#include "resources.hpp"

class Bullet : public AMovingEntity {
	public:
		Bullet(const char *, int, int, int);
		~Bullet();
		void	getHit();
		void	move(int, int);
		int		getDir();
		// const char * getBulletSkin();

	private:
		Bullet();
		Bullet(Bullet & instance);
		Bullet & operator=(Bullet & rhs);
		bool _alive;
};

#endif
