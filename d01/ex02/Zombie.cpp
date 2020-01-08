/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:59:56 by malluin           #+#    #+#             */
/*   Updated: 2020/01/08 16:16:30 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() : type("brain_eater"), name("flesh")
{
	std::cout << "A zombie is born." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " falls apart." << std::endl;
}

void	Zombie::announce() const
{
	std::string	type = " (" + this->type + ')';
	std::cout << '<' << this->name << type << "> Braiiiiiiinnnssss..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

void	Zombie::setType(std::string type)
{
	this->type = type;
}
