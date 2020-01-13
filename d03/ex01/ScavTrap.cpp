/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 13:17:45 by malluin           #+#    #+#             */
/*   Updated: 2020/01/13 16:02:55 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : _name(name)
{
	this->_hitpoints = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 50;
	this->_max_energy_points = 50;
	this->_level = 1;
	this->_melee_attack_damage = 20;
	this->_ranged_attack_damage = 15;
	this->_armor_damage_reduction = 3;
	std::cout << "You think FragTrap was bad? I am an even worse character "
		<< "because the developers have a bad sense of humor." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & instance)
{
	*this = instance;
	std::cout << "Hello new me!" << std::endl;
}

ScavTrap::~ScavTrap()
{
		std::cout << this->_name << " En Route for robot heaven !" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
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

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with a ranged attack !" << std::endl;
	std::cout << target << " takes " << this->_ranged_attack_damage
		<< " damage ! Ouch !" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with a melee attack !" << std::endl;
	std::cout << target << " takes " << this->_melee_attack_damage
		<< " damage ! Ouch !" << std::endl;
}


void	ScavTrap::sacrifice(std::string const &target)
{
	(void)target;
	this->_hitpoints = 0;
	std::cout << "FR4G-TP " << this->_name << " uses Sacrifice!" <<
		std::endl << "Current Health: " << this->_hitpoints << "/" << this->_max_hit_points << std::endl
		<< "[" << this->_name << "] For you...I commit...seppuku..." << std::endl;
	return;
}

void	ScavTrap::rubberDucky(std::string const &target)
{
	(void)target;
	this->_max_hit_points = this->_max_hit_points * 1.5;
	std::cout << "FR4G-TP " << this->_name << " uses Rubber Ducky! With his rubber ducky his max health has increased by 1.5x!" << std::endl <<
		"New Max Health " << this->_max_hit_points << std::endl;
	return;
}

void	ScavTrap::energyDrink(std::string const &target)
{
	(void)target;
	this->_energy_points = this->_energy_points += 50;
	if (this->_energy_points > this->_max_energy_points)
		this->_energy_points = this->_max_energy_points;
	std::cout << "FR4G-TP " << this->_name << " pops an energy dink! He feels so replenished now !";
	std::cout << " Current energy: " << this->_energy_points << "/" << this->_max_energy_points << std::endl;
	return;
}

void	ScavTrap::takeDamage(unsigned int amount)
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

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_hitpoints + int(amount) > this->_max_hit_points)
		this->_hitpoints = this->_max_hit_points;
	else
		this->_hitpoints += amount;
	std::cout << "FR4G-TP " << this->_name << " is repaired for " << amount << " of damage !";
	std::cout << " Current Health: " << this->_hitpoints << "/" << this->_max_hit_points << std::endl;

}
