/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:28:59 by malluin           #+#    #+#             */
/*   Updated: 2020/01/08 18:30:49 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
public:
	HumanB(std::string n);
	~HumanB();
	void		attack() const;
	void		setWeapon(Weapon& weapon);
private:
	std::string	_name;
	Weapon		*_weapon;
};
#endif
