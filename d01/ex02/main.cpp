/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:59:57 by malluin           #+#    #+#             */
/*   Updated: 2020/01/08 15:11:23 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int		main()
{
	ZombieEvent event = ZombieEvent();

	event.setZombieType("Boomer");
	Zombie* Igor = event.newZombie("Igor");
	Zombie* Petruchka = event.newZombie("Petruchka");
	event.setZombieType("Runner");
	Zombie* Vassily = event.newZombie("Vassily");
	Igor->announce();
	Petruchka->announce();
	Vassily->announce();
	event.randomChump();
	event.randomChump();
	event.randomChump();
	delete Igor;
	delete Petruchka;
	delete Vassily;
	return 1;
}
