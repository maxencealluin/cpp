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
	std::cout << "Please provide contact informations:" << std::endl;
	std::cout << "First name: ";
	std::getline(std::cin, this->first_name);
	std::cout << "Last name: ";
	std::getline(std::cin, this->last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, this->nickname);
	std::cout << "Login: ";
	std::getline(std::cin, this->login);
	std::cout << "Postal address: ";
	std::getline(std::cin, this->postal_address);
	std::cout << "Email address: ";
	std::getline(std::cin, this->email_address);
	std::cout << "Phone number: ";
	std::getline(std::cin, this->phone_number);
	std::cout << "Underwear color: ";
	std::getline(std::cin, this->underwear_color);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, this->darkest_secret);
	std::cout << "Contact added." << std::endl;
	return;
}

void	Contact::display(void) {
	this->used = 1;
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Login: " << this->login << std::endl;
	std::cout << "Postal address: " << this->postal_address << std::endl;
	std::cout << "Email address: " << this->email_address << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
	std::cout << "Underwear color: " << this->underwear_color << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
	return;
}
