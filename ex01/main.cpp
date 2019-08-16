/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 16:00:50 by malluin           #+#    #+#             */
/*   Updated: 2019/08/15 16:25:11 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>

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
	return;
}

int		main(void)
{
	Contact		instance[8];
	int			exit;
	int			idx;
	std::string	cmd;
	int			choice;

	exit = 0;
	idx = 0;
	while (!exit)
	{
		std::cout << "\nPlease input command (SEARCH, ADD or EXIT): " ;
		// std::cin >> cmd;
		std::getline(std::cin, cmd);
		// std::cout << std::endl;
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
			if (idx == -1)
				std::cout << "\nNo available contacts:\n";
			else
			{
				std::cout << "\nAvailable contacts:\n";
				std::cout << std::setw(10) << "index" << '|';
				std::cout << std::setw(10) << "first name" << '|';
				std::cout << std::setw(10) << "last name" << '|';
				std::cout << std::setw(10) << "nickname" << '|' << std::endl;
				for (int j = 0;j < idx; j++)
					display_contact(instance[j], j);
				std::cout << "\nPlease enter the desired index: ";
				choice = -1;
				while (choice == -1)
					{
					std::cin >> choice;
					std::cout << std::endl;
					if (!std::cin.good())
					{
						choice = -1;
						std::cout << "\n Please provide a correct number." << std::endl;
					}
					}
				if (choice >= 0 && choice < idx)
					instance[choice].display();
				else
					std::cout << "Incorrect index, must be between 0 and inferior to " << idx << '.' << std::endl;
			}
		}
		else if (cmd == "EXIT")
			exit = 1;
		else
			std::cout << "Invalid command." << std::endl;
	}
	return 0;
}
