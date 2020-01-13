/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 16:54:13 by malluin           #+#    #+#             */
/*   Updated: 2020/01/13 17:11:10 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	NinjaTrap : public ClapTrap
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
};

#endif
