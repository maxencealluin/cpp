/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 16:00:50 by malluin           #+#    #+#             */
/*   Updated: 2020/01/07 13:55:39 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <stdlib.h>

void	ft_display(std::string var)
{
	if (var.length() > 10)
		std::cout << std::setw(9) << var.substr(0,9) << ".|";
	else
		std::cout << std::setw(10) << var << '|';
}

void	display_contact(Contact instance, int j)
{
	instance.used = 1;
	std::cout << std::setw(10) << j << '|';
	ft_display(instance.first_name);
	ft_display(instance.last_name);
	ft_display(instance.nickname);
	std::cout << std::endl;
}

int		main(void)
{
	Contact		instance[8];
	int			exit;
	int			idx;
	std::string	cmd;
	int			choice;
	std::string	tmp;

	exit = 0;
	idx = 0;
	while (!exit)
	{
		std::cout << "Please input command (SEARCH, ADD or EXIT): " ;
		std::getline(std::cin, cmd, '\n');
		if (cmd == "ADD")
			if (idx == 8)
			{
				std::cout << "Contacts full, replacing first contact." << std::endl;
				instance[0].add();
			}
			else
				instance[idx++].add();
		else if (cmd == "SEARCH")
		{
			std::cout << "Available contacts:" << std::endl;
			std::cout << std::setw(10) << "index" << '|';
			std::cout << std::setw(10) << "first name" << '|';
			std::cout << std::setw(10) << "last name" << '|';
			std::cout << std::setw(10) << "nickname" << '|' << std::endl;
			if (idx <= 0)
			{
				std::cout << std::endl << "No available contacts." << std::endl;
			}
			else
			{
				for (int j = 0;j < idx; j++)
					display_contact(instance[j], j);
				std::cout << std::endl << "Please enter the desired index: ";
				choice = -1;
				std::cin >> choice;
				if (std::cin.fail() or (choice < 0 or choice >= idx))
					std::cout << "Incorrect index, must be between 0 and " << idx - 1 << '.' << std::endl;
				else
					instance[choice].display();
				std::cin.clear();
				std::cin.ignore(10000, '\n');
			}
		}
		else if (cmd == "EXIT")
			exit = 1;
		else
			std::cout << "Invalid command." << std::endl;
		std::cout << std::endl;
		if (std::cin.eof())
			exit = 1;
	}
	return 1;
}
