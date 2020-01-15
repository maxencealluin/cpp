/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:43:15 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 18:32:31 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

void main_perso()
{
	TacticalMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	TacticalMarine* bob2 = new TacticalMarine(*bob);
	TacticalMarine* bob3 = new TacticalMarine(*bob);
	TacticalMarine* bob4 = new TacticalMarine(*bob);

	Squad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(bob2);
	vlc->push(bob3);
	vlc->push(bob4);
	vlc->push(jim);

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	Squad* vlc2 = new Squad();

	TacticalMarine* newbob = new TacticalMarine;

	vlc2->push(newbob);
	*vlc = *vlc2;
	std::cout << vlc->getCount() << std::endl;

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
}

void main_officiel()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
	       ISpaceMarine* cur = vlc->getUnit(i);
	       cur->battleCry();
	       cur->rangedAttack();
	       cur->meleeAttack();
	}
	delete vlc;
}

int		main()
{
	// main_perso()
	main_officiel();
	return 1;
}
