/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 13:17:45 by malluin           #+#    #+#             */
/*   Updated: 2020/01/13 15:59:38 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

class ScavTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & instance);
		~ScavTrap();
		ScavTrap &	operator=(ScavTrap const & rhs);
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		sacrifice(std::string const &target);
		void		rubberDucky(std::string const &target);
		void		energyDrink(std::string const &target);
		void		challengeNewcomer();
	protected:
		std::string		_name;
		int				_hitpoints;
		int				_max_hit_points;
		int				_energy_points;
		int				_max_energy_points;
		int				_level;
		int				_melee_attack_damage;
		int				_ranged_attack_damage;
		int				_armor_damage_reduction;
};

#endif
