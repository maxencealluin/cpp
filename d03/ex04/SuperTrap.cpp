/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:59:29 by malluin           #+#    #+#             */
/*   Updated: 2020/01/13 19:00:42 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : NinjaTrap(name), FragTrap(name)
{
	std::cout << this->_hitpoints << std::endl;
	std::cout << this->_max_hit_points << std::endl;
	std::cout << this->_energy_points << std::endl;
	std::cout << this->_max_energy_points << std::endl;
	std::cout << this->_melee_attack_damage << std::endl;
	std::cout << this->_ranged_attack_damage << std::endl;
	std::cout << this->_armor_damage_reduction << std::endl;
	std::cout << this->_name << " Claptrap is now a SuperTrap !" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap & instance) : NinjaTrap(instance), FragTrap(instance)
{
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
	NinjaTrap::rangedAttack(target);
}

//
// SuperTrap &	SuperTrap::operator=(SuperTrap & rhs)
// {
// 	ClapTrap::operator = (rhs);
// 	return *this;
// }
