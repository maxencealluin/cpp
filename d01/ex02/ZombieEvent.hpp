/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:59:55 by malluin           #+#    #+#             */
/*   Updated: 2020/01/08 16:16:42 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent {
public:
	void	setZombieType(std::string type);
	Zombie*	newZombie(std::string name);
	void	randomChump();
private:
	std::string	type;
};

#endif
