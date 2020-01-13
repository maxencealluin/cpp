/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 13:17:45 by malluin           #+#    #+#             */
/*   Updated: 2020/01/13 16:41:14 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_energy_points = 50;
	this->_max_energy_points = 50;
	this->_level = 1;
	this->_melee_attack_damage = 20;
	this->_ranged_attack_damage = 15;
	this->_armor_damage_reduction = 3;
	std::cout << this->_name << " Claptrap is now a ScavTrap !" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & instance) : ClapTrap(instance)
{
	std::cout << this->_name << " Claptrap is now a ScavTrap !" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->_name << " ScavTrap goes back to ClapTrap" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	ClapTrap::operator = (rhs);
	return *this;
}

void		ScavTrap::challengeNewcomer()
{
	std::string	types[5] = {
		"Duck Hunt",
		"Geese Arena",
		"Meatballs Challenge",
		"Road rage murderous spree",
		"Gigantic rooster deathmatch"
	};
	std::cout << "You want a challenge? I'll give you one !" << std::endl;
	std::cout << "Let's see if fate is on your side ..." << std::endl;
	std::cout << "Gods have mercy on you as you face the infamous '"
		<< types[std::rand() % 5] << "' challenge ! Good luck !" << std::endl << std::endl;
}
