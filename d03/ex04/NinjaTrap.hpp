/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 16:54:13 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 11:12:55 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	NinjaTrap : virtual public ClapTrap
{
	public:
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap & instance);
		~NinjaTrap();
		NinjaTrap &	operator=(NinjaTrap & rhs);
		void	ninjaShoebox(NinjaTrap & trap);
		void	ninjaShoebox(ClapTrap & trap);
		void	ninjaShoebox(ScavTrap & trap);
		void	ninjaShoebox(FragTrap & trap);
	protected:
		NinjaTrap(void);
		static int const	_HitPoints;
		static int const	_EnergyPoints;
		static int const	_initialLevel;
		static int const	_maxHitPoints;
		static int const	_maxEnergyPoints;
		static int const	_meleeAttackDamage;
		static int const	_rangedAttackDamage;
		static int const	_armorDamageReduction;
};

#endif
