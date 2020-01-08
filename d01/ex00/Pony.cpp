/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 11:41:57 by malluin           #+#    #+#             */
/*   Updated: 2020/01/08 12:37:40 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string c, std::string n) : color(c), name(n)
{
	std::cout << "A Pony is born. Welcome " << n << " !" << std::endl;
}

Pony::~Pony()
{
	std::cout << "Goodbye " << this->name << " ! :(" << std::endl;
}

void	Pony::rainbowdash() const
{
	std::cout << "A gigantic " << this->color <<
		" rainbow appears in the sky." << std::endl;
}
