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

int		main(void)
{
	Contact		instance[8];
	int			exit;
	int			idx;
	std::string	cmd;

	exit = 0;
	idx = 0;
	while (!exit)
	{
		std::cout << "Please input command (SEARCH, ADD or EXIT):" << std::endl;
		std::cin >> cmd;
		if (cmd == "ADD")
			instance[idx++].add();
		else if (cmd == "SEARCH")
			exit = 0;
		else if (cmd == "EXIT")
			exit = 1;
		else:
			std::cout << "Please input command (SEARCH, ADD or EXIT):" << std::endl;
	}
	return 0;
}
