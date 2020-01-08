/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:48:01 by malluin           #+#    #+#             */
/*   Updated: 2020/01/08 17:28:57 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {}
Human::~Human(void) {}

std::string	Human::identify() const
{
	return this->brain.identify();
}

const Brain	&Human::getBrain() const
{
	return this->brain;
}
