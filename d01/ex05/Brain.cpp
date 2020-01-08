/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:46:13 by malluin           #+#    #+#             */
/*   Updated: 2020/01/08 17:29:07 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain(void) {}
Brain::~Brain(void) {}

std::string	Brain::identify() const
{
	std::stringstream	address;
	address << (void *)this;
	return address.str();
}
