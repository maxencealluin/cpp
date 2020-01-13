/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 13:17:45 by malluin           #+#    #+#             */
/*   Updated: 2020/01/13 17:22:46 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & instance);
		~ClapTrap();
		ClapTrap &	operator=(ClapTrap const & rhs);
		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		std::string	getName();

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
