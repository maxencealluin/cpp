/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 17:38:05 by malluin           #+#    #+#             */
/*   Updated: 2020/01/08 18:33:25 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &w) : _name(n), _weapon(w) {}
HumanA::~HumanA() {}

void	HumanA::attack() const
{
	std::cout << this->_name << " attacks with his "
		<< this->_weapon.getType() << std::endl;
}
