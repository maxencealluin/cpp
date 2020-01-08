/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:59:54 by malluin           #+#    #+#             */
/*   Updated: 2020/01/08 16:14:53 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <iostream>

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie *zomb = new Zombie();
	zomb->setType(this->type);
	zomb->setName(name);
	return zomb;
}

void	ZombieEvent::randomChump()
{
	std::string names[5] = {"Robert", "Emily", "Brice", "Francois", "Juan"};

	Zombie zombie;
	zombie.setType(this->type);
	zombie.setName(names[std::rand() % 5]);
	zombie.announce();
}
