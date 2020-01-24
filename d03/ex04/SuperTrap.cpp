/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:59:29 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 11:49:38 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : NinjaTrap(name), FragTrap(name)
{
	this->_energy_points = NinjaTrap::_EnergyPoints;
	this->_max_energy_points = NinjaTrap::_maxEnergyPoints;
	this->_melee_attack_damage = NinjaTrap::_meleeAttackDamage;
	std::cout << this->_name << " Claptrap is now a SuperTrap !" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap & instance) : NinjaTrap(instance), FragTrap(instance)
{
	*this = instance;
	std::cout << this->_name << " Claptrap is now a SuperTrap !" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << this->_name << " SuperTrap goes back to ClapTrap" << std::endl;
}

void	SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}

SuperTrap &	SuperTrap::operator=(SuperTrap & rhs)
{
	ClapTrap::operator = (rhs);
	return *this;
}

void	SuperTrap::showStats(void)
{
	std::cout << "hitpoints: " << this->_hitpoints << std::endl;
	std::cout << "max_hit_points: " << this->_max_hit_points << std::endl;
	std::cout << "energy_points: " << this->_energy_points << std::endl;
	std::cout << "max_energy_points: " << this->_max_energy_points << std::endl;
	std::cout << "melee_attack_damage: " << this->_melee_attack_damage << std::endl;
	std::cout << "ranged_attack_damage: " << this->_ranged_attack_damage << std::endl;
	std::cout << "armor_damage_reduction: " << this->_armor_damage_reduction << std::endl;
}
