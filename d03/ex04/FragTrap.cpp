/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 10:55:59 by malluin           #+#    #+#             */
/*   Updated: 2020/01/13 18:55:36 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitpoints = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 100;
	this->_max_energy_points = 100;
	this->_level = 1;
	this->_melee_attack_damage = 30;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
	std::cout << this->_name << " Claptrap is now a FragTrap !" << std::endl;
}

FragTrap::FragTrap(FragTrap const & instance) : ClapTrap(instance)
{
	std::cout << this->_name << " Claptrap is now a FragTrap !" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << this->_name << " FragTrap goes back to ClapTrap" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	ClapTrap::operator = (rhs);
	return *this;
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

void	FragTrap::kickAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with a kick attack !" << std::endl;
	std::cout << target << " takes " << this->_ranged_attack_damage
		<< " damage ! Ouch !" << std::endl;
}

void	FragTrap::punchAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with a punch attack !" << std::endl;
	std::cout << target << " takes " << this->_melee_attack_damage
		<< " damage ! Ouch !" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	void	(FragTrap::*ptr[5])(std::string const &) =
	{
		&FragTrap::kickAttack,
		&FragTrap::punchAttack,
		&FragTrap::sacrifice,
		&FragTrap::rubberDucky,
		&FragTrap::energyDrink
	};
	std::string	types[5] = {
		"kickAttack",
		"punchAttack",
		"sacrifice",
		"rubberDucky",
		"energyDrink"
	};
	if (this->_energy_points < 25)
		std::cout << "Not enough energy points left !" << std::endl;
	else
	{
		this->_energy_points -= 25;
		(this->*ptr[std::rand() % 5])(target);
	}
	std::cout << std::endl;
}
