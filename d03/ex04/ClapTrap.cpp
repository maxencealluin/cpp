/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 13:17:45 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 11:24:43 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default")
{
	this->_hitpoints = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 100;
	this->_max_energy_points = 100;
	this->_level = 1;
	this->_melee_attack_damage = 30;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
	std::cout << this->_name << " claptrap is born !" << std::endl;
}


ClapTrap::ClapTrap(std::string name) : _name(name)
{
	this->_hitpoints = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 100;
	this->_max_energy_points = 100;
	this->_level = 1;
	this->_melee_attack_damage = 30;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
	std::cout << this->_name << " A claptrap is born !" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & instance)
{
	*this = instance;
	std::cout << this->_name << " A claptrap has been copied !" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << " Claptrap disapears..." << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	this->_hitpoints = rhs._hitpoints;
	this->_max_hit_points = rhs._max_hit_points;
	this->_energy_points = rhs._energy_points;
	this->_max_energy_points = rhs._max_energy_points;
	this->_level = rhs._level;
	this->_name = rhs._name;
	this->_melee_attack_damage = rhs._melee_attack_damage;
	this->_ranged_attack_damage = rhs._ranged_attack_damage;
	this->_armor_damage_reduction = rhs._armor_damage_reduction;
	return *this;
}

std::string	ClapTrap::getName()
{
	return this->_name;
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << this->_name << " attacks " << target << " with a ranged attack !" << std::endl;
	std::cout << target << " takes " << this->_ranged_attack_damage
		<< " damage ! Ouch !" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << this->_name << " attacks " << target << " with a melee attack !" << std::endl;
	std::cout << target << " takes " << this->_melee_attack_damage
		<< " damage ! Ouch !" << std::endl;
}


void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_armor_damage_reduction >= int(amount))
	{
		std::cout << "Armor is too high ! No damage inflicted" << std::endl;
		return;
	}
	std::cout << "FR4G-TP " << this->_name << " takes " << amount << " of damage !";
	if (this->_hitpoints - ((int)amount - this->_armor_damage_reduction) <= 0)
	{
		this->_hitpoints = 0;
	}
	else
		this->_hitpoints -= (amount - this->_armor_damage_reduction);
	std::cout << " Current Health: " << this->_hitpoints << "/" << this->_max_hit_points << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitpoints + int(amount) > this->_max_hit_points)
		this->_hitpoints = this->_max_hit_points;
	else
		this->_hitpoints += amount;
	std::cout << "FR4G-TP " << this->_name << " is repaired for " << amount << " of damage !";
	std::cout << " Current Health: " << this->_hitpoints << "/" << this->_max_hit_points << std::endl;

}
