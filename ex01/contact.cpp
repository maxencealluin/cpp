/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 15:57:13 by malluin           #+#    #+#             */
/*   Updated: 2019/08/15 16:23:38 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"

Contact::Contact( void ) {
	this->used = 0;
	return;
}

Contact::~Contact( void ) {
	return;
}

void	Contact::add(void) {
	this->used = 1;
	std::cout << "Contact added." << std::endl;
	return;
}
