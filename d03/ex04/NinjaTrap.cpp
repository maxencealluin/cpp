/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 16:54:12 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 11:12:09 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

int const	NinjaTrap::_HitPoints = 60;
int const	NinjaTrap::_maxHitPoints = 60;
int const	NinjaTrap::_initialLevel = 1;
int const	NinjaTrap::_EnergyPoints = 120;
int const	NinjaTrap::_maxEnergyPoints = 120;
int const	NinjaTrap::_meleeAttackDamage = 60;
int const	NinjaTrap::_rangedAttackDamage = 5;
int const	NinjaTrap::_armorDamageReduction = 0;

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	this->_hitpoints = 60;
	this->_max_hit_points = 60;
	this->_energy_points = 120;
	this->_max_energy_points = 120;
	this->_melee_attack_damage = 60;
	this->_ranged_attack_damage = 5;
	this->_armor_damage_reduction = 0;
	std::cout << this->_name << " Claptrap is now a NinjaTrap !!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap & instance) : ClapTrap(instance)
{
	std::cout << this->_name << " Claptrap is now a NinjaTrap !" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << this->_name << " NinjaTrap goes back to ClapTrap" << std::endl;
}

NinjaTrap &	NinjaTrap::operator=(NinjaTrap & rhs)
{
	ClapTrap::operator = (rhs);
	return *this;
}

void NinjaTrap::ninjaShoebox(NinjaTrap & trap)
{
	std::cout << "Oh! Another ninja!" << std::endl;
	std::cout << "Shoeboxing NinjaTrap " << trap.getName() << "." << std::endl;
}
void NinjaTrap::ninjaShoebox(ClapTrap & trap)
{
	std::cout << "Dear Master, I am honored to fight you !" << std::endl;
	std::cout << "Shoeboxing ClapTrap " << trap.getName() << "." << std::endl;
}
void NinjaTrap::ninjaShoebox(FragTrap & trap)
{
	std::cout << "You're the explosive kind aren't you ?" << std::endl;
	std::cout << "Shoeboxing FragTrap " << trap.getName() << "." << std::endl;
}
void NinjaTrap::ninjaShoebox(ScavTrap & trap)
{
	std::cout << "I will destroy you." << std::endl;
	std::cout << "Shoeboxing ScavTrap " << trap.getName() << "." << std::endl;
}
