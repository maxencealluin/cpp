/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 10:55:59 by malluin           #+#    #+#             */
/*   Updated: 2020/01/13 13:16:06 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _name(name)
{
	this->_hitpoints = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 100;
	this->_max_energy_points = 100;
	this->_level = 1;
	this->_melee_attack_damage = 30;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
	std::cout << "Here I am ! The most annoying character ever created !" << std::endl;
}

FragTrap::FragTrap(FragTrap const & instance)
{
	*this = instance;
	std::cout << "Here I am ! A copy of the most annoying character ever created !" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Bip bop. No more purpose. Autodestruction." << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
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

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with a ranged attack !" << std::endl;
	std::cout << target << " takes " << this->_ranged_attack_damage
		<< " damage ! Ouch !" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with a melee attack !" << std::endl;
	std::cout << target << " takes " << this->_melee_attack_damage
		<< " damage ! Ouch !" << std::endl;
}


void	FragTrap::sacrifice(std::string const &target)
{
	(void)target;
	this->_hitpoints = 0;
	std::cout << "FR4G-TP " << this->_name << " uses Sacrifice!" <<
		std::endl << "Current Health: " << this->_hitpoints << "/" << this->_max_hit_points << std::endl
		<< "[" << this->_name << "] For you...I commit...seppuku..." << std::endl;
	return;
}

void	FragTrap::rubberDucky(std::string const &target)
{
	(void)target;
	this->_max_hit_points = this->_max_hit_points * 1.5;
	std::cout << "FR4G-TP " << this->_name << " uses Rubber Ducky! With his rubber ducky his max health has increased by 1.5x!" << std::endl <<
		"New Max Health " << this->_max_hit_points << std::endl;
	return;
}

void	FragTrap::energyDrink(std::string const &target)
{
	(void)target;
	this->_energy_points = this->_energy_points += 50;
	if (this->_energy_points > this->_max_energy_points)
		this->_energy_points = this->_max_energy_points;
	std::cout << "FR4G-TP " << this->_name << " pops an energy dink! He feels so replenished now !";
	std::cout << " Current energy: " << this->_energy_points << "/" << this->_max_energy_points << std::endl;
	return;
}

void	FragTrap::takeDamage(unsigned int amount)
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

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->_hitpoints + int(amount) > this->_max_hit_points)
		this->_hitpoints = this->_max_hit_points;
	else
		this->_hitpoints += amount;
	std::cout << "FR4G-TP " << this->_name << " is repaired for " << amount << " of damage !";
	std::cout << " Current Health: " << this->_hitpoints << "/" << this->_max_hit_points << std::endl;

}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	void	(FragTrap::*ptr[5])(std::string const &) =
	{
		&FragTrap::rangedAttack,
		&FragTrap::meleeAttack,
		&FragTrap::sacrifice,
		&FragTrap::rubberDucky,
		&FragTrap::energyDrink
	};
	std::string	types[5] = {
		"rangedAttack",
		"meleeAttack",
		"sacrifice",
		"rubberDucky",
		"energyDrink"
	};
	if (this->_energy_points < 25)
		std::cout << "Not enough energy points left !" << std::endl;
	else
	{
		this->_energy_points -= 25;
		int choice = std::rand() % 5;
		(this->*ptr[choice])(target);
	}
	std::cout << std::endl;
}
