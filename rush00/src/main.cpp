/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:12:08 by malluin           #+#    #+#             */
/*   Updated: 2020/01/24 18:04:36 by malluin          ###   ########.fr       */
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

	controller.initialize_game();
	clock_t beg = clock();
	while (true)
	{
		if ((clock() - beg) < 12000)
			continue;
		else
			beg = clock();
		// std::cout <<  clock() - beg << std::endl;
		// sleep(1);
		ch	=  getch();
		if (ch == KEY_ESCAPE)
			break;
		if(!controller.game_loop(ch))
		{
			screen.gameOver();
			sleep(3);
			break;
		}
		//
		//
		//
		// if ((ch = getch()) != ERR)
		// {
		// 	if (ch == KEY_ESCAPE)
		// 		break;
		// 	else
		// }
		// else
		screen.refresh_screen();
	}
	return 1;
}
