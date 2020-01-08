/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 17:45:14 by malluin           #+#    #+#             */
/*   Updated: 2020/01/08 18:31:13 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t): _type(t) {};
Weapon::~Weapon() {};

const std::string	&Weapon::getType()
{
	return this->_type;
}

void				Weapon::setType(std::string type)
{
	this->_type = type;
}
