/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 13:32:42 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 14:01:54 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
	private:
		AWeapon();
		std::string _name;
		int			_apcost;
		int			_damage;

	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const & instance);
		~AWeapon();
		AWeapon & operator=(AWeapon const & rhs);
		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
};

#endif
