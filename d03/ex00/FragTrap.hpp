/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 10:56:02 by malluin           #+#    #+#             */
/*   Updated: 2020/01/13 18:33:51 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

class FragTrap {
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const & instance);
		~FragTrap();
		FragTrap & operator=(FragTrap const & rhs);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	sacrifice(std::string const &target);
		void	rubberDucky(std::string const &target);
		void	energyDrink(std::string const &target);
		void	vaulthunter_dot_exe(std::string const & target);
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
	private:
		FragTrap(void);
};

#endif
