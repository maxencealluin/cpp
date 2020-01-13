/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 10:56:02 by malluin           #+#    #+#             */
/*   Updated: 2020/01/13 18:32:44 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const & instance);
		~FragTrap();
		FragTrap & operator=(FragTrap const & rhs);
		void	sacrifice(std::string const &target);
		void	rubberDucky(std::string const &target);
		void	energyDrink(std::string const &target);
		void	vaulthunter_dot_exe(std::string const & target);
	private:
		FragTrap(void);
};

#endif
