/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 15:13:00 by malluin           #+#    #+#             */
/*   Updated: 2020/01/08 16:06:29 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

#define COUNT_NAMES 5

class ZombieHorde
{
public:
	ZombieHorde(int N);
	~ZombieHorde();
	void	announce();
private:
	static std::string _names[COUNT_NAMES];
	int		_nb;
	Zombie* _zombies;
};

#endif
