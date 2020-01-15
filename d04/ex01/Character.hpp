/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:11:22 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 15:54:48 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character {
	private:
		Character();
		std::string	_name;
		int			_ap;
		AWeapon		*_weapon;
	public:
		Character(std::string const & name);
		~Character();
		Character & operator=(Character & rhs);
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string getName() const;
		int 		getAp() const;
		AWeapon *	getWeapon() const;
};

std::ostream & operator<<(std::ostream & stream, Character & rhs);
#endif
