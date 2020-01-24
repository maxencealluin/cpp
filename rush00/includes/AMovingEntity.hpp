/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMovingEntity.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:03:38 by malluin           #+#    #+#             */
/*   Updated: 2020/01/24 14:53:30 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMOVINGENTITY_HPP
# define AMOVINGENTITY_HPP

#include "IGameEntity.hpp"
#include "resources.hpp"

typedef struct s_pos {
	int x;
	int y;
}				t_pos;

class AMovingEntity : public IGameEntity {
	public:
		AMovingEntity();
		AMovingEntity(int, int, int);
		virtual ~AMovingEntity();
		virtual void getHit() = 0;
		virtual void move(int, int) = 0;
		void move();
		const char * getBulletSkin();

		const char	*getSkin() const;
		std::string getColor() const;
		t_pos &		getPos();

	protected:
		AMovingEntity(AMovingEntity const & instance);
		AMovingEntity & operator=(AMovingEntity & rhs);
		const char 	*_skin;
		std::string _color;
		t_pos		_pos;
		int			_dir;
		const char * _bulletSkin;
};

#endif
