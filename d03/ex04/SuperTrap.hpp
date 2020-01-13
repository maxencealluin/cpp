/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:26:08 by malluin           #+#    #+#             */
/*   Updated: 2020/01/13 19:00:47 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	SuperTrap : public  NinjaTrap, public FragTrap
{
	public:
		SuperTrap(std::string name);
		SuperTrap(SuperTrap & instance);
		~SuperTrap();
		SuperTrap &	operator=(SuperTrap & rhs);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
	private:
		SuperTrap(void);
};

#endif
