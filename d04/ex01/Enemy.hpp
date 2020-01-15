/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:13:19 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 15:37:04 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{
	private:
		int			_hp;
		std::string	_type;

	public:
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const & instance);
		virtual ~Enemy();

		Enemy &			operator=(Enemy const & rhs);
		std::string		getType() const;
		int				getHP() const;
		void			setHP(int);
		virtual void	takeDamage(int);
};

#endif
