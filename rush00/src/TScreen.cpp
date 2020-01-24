/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TScreen.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:39:13 by malluin           #+#    #+#             */
/*   Updated: 2020/01/24 17:37:13 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TScreen.hpp"

TScreen::TScreen()
{
	initscr();
	cbreak();
	nodelay(stdscr, TRUE);
	noecho();
	curs_set(0);
	keypad(stdscr, TRUE);
}

// for (int i = 1; i < COLS * width; i++)

void	TScreen::borders()
{
	wborder(stdscr, '|', '|', '=', '=', '=', '=', '=', '=');

	for (int y = 0; y < WALL_THICK; y++)
	{
		wmove(stdscr, y + 1, 1);
		for (int i = 1; i < (COLS) - 1; i++)
			printw("*");
	}
	for (int y = 0; y < WALL_THICK; y++)
	{
		wmove(stdscr, LINES - WALL_THICK + y - 1, 1);
		for (int i = 1; i < (COLS) - 1; i++)
			printw("*");
	}
}

void	TScreen::gameOver()
{
	clear();
	wmove(stdscr, LINES/2, COLS/2);
	printw("**** GAME OVER ****");
	wmove(stdscr, LINES/2 + 1, COLS/2 + 1);
	printw("THE ENTIRE HUMAN RACE IS DOOMED.");
	refresh();
}

void	TScreen::refresh_screen()
{
	static int		line = -1;
	static int		col = -1;

	if (LINES > 5 and COLS > 5)
	{
		if (line != LINES || col != COLS)
		{
			clear();
			this->borders();
			line = LINES;
			col = COLS;
		}
		wmove(stdscr, 0, 0);
	}
	refresh();

}

void	TScreen::draw_entity(AMovingEntity * ent)
{
	int x = ent->getPos().x;
	int y = ent->getPos().y;

	if (x > 0 && x < (COLS - 1) && y > (WALL_THICK) && y < (LINES - WALL_THICK - 1))
	{
		wmove(stdscr, ent->getPos().y, ent->getPos().x);
		printw(ent->getSkin());
	}

}

void	TScreen::draw_entity(AMovingEntity * ent, const char * skin)
{
	int x = ent->getPos().x;
	int y = ent->getPos().y;

	if (x > 0 && x < (COLS - 1) && y > (WALL_THICK) && y < (LINES - WALL_THICK - 1))
	{
		wmove(stdscr, ent->getPos().y, ent->getPos().x);
		printw(skin);
	}
}

TScreen::~TScreen()
{
	endwin();
}
