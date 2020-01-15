/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 13:54:33 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 15:08:41 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() :	Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & instance) : Enemy(instance)
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant & SuperMutant::operator=(SuperMutant const & rhs)
{
	Enemy::operator = (rhs);
	return *this;
}

void SuperMutant::takeDamage(int damage)
{
	damage -= 3;
	if (damage > 0)
		setHP(getHP() - damage);
}
