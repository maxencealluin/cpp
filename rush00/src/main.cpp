/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:12:08 by malluin           #+#    #+#             */
/*   Updated: 2020/01/23 17:46:18 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TScreen.hpp"
#include "Player.hpp"
#include "GameController.hpp"

int		main()
{
	TScreen screen;
	GameController controller(screen);
	int ch;

	Player player;

	std::cout << player.getPos().x << std::endl;
	std::cout << player.getPos().y << std::endl;
	std::cout << player.getSkin() << std::endl;
	std::cout << player.getColor() << std::endl;

	while (true)
	{
		if ((ch = getch()) != ERR)
		{
			if (ch == KEY_ESCAPE)
				break;
			else
				controller.move_entities(ch);
			// std::cout << player.getPos().x << std::endl;
			// std::cout << player.getPos().y << std::endl;
		}
		screen.refresh_screen();
	}
	return 1;
}
