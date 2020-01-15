/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 10:56:02 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 11:11:12 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const & instance);
		~FragTrap();
		FragTrap & operator=(FragTrap const & rhs);
		void	sacrifice(std::string const &target);
		void	rubberDucky(std::string const &target);
		void	energyDrink(std::string const &target);
		void	kickAttack(std::string const & target);
		void	punchAttack(std::string const & target);
		void	vaulthunter_dot_exe(std::string const & target);
	protected:
		FragTrap(void);
		static	int const	_initialLevel;
		static	int const	_HitPoints;
		static	int const	_maxHitPoints;
		static	int const	_EnergyPoints;
		static	int const	_maxEnergyPoints;
		static	int const	_meleeAttackDamage;
		static	int const	_rangedAttackDamage;
		static	int const	_armorDamageReduction;
};

#endif
