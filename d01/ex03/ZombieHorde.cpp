/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 15:12:56 by malluin           #+#    #+#             */
/*   Updated: 2020/01/08 16:19:22 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string ZombieHorde::_names[COUNT_NAMES] =  {"Robert", "Emily", "Brice", "Francois", "Juan"};

ZombieHorde::ZombieHorde(int N): _nb(N)
{
	std::cout << "A large zombie horde is coming." << std::endl;
	this->_zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		this->_zombies[i].setType("Sheep");
		this->_zombies[i].setName(_names[std::rand() % COUNT_NAMES]);
	}
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->_zombies;
	std::cout << "The horde has been destroyed." << std::endl;
}

void	ZombieHorde::announce()
{
	int		i;

	i = 0;
	while (i < this->_nb)
		this->_zombies[i++].announce();
}
