/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 13:42:25 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 15:58:57 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"


void		main1()
{
	PlasmaRifle rifle;
	std::cout << "Name: " << rifle.getName() << std::endl;
	std::cout << "APCost: " << rifle.getAPCost() << std::endl;
	std::cout << "Damage: " << rifle.getDamage() << std::endl;
	rifle.attack();

	PowerFist fist;
	std::cout << "Name: " << fist.getName() << std::endl;
	std::cout << "APCost: " << fist.getAPCost() << std::endl;
	std::cout << "Damage: " << fist.getDamage() << std::endl;
	fist.attack();

	SuperMutant hulk;
	hulk.takeDamage(50);
	std::cout << hulk.getHP() << std::endl;
	RadScorpion scorpy;
	scorpy.takeDamage(50);
	std::cout << scorpy.getHP() << std::endl;
	std::cout << std::endl << std::endl;
}

void	main2()
{
	PlasmaRifle *rifle = new PlasmaRifle();
	PowerFist *fist = new PowerFist();
	Character player("John");

	SuperMutant *mutant = new SuperMutant();

	player.attack(mutant);
	std::cout << player;
	player.equip(fist);
	player.attack(mutant);
	player.attack(mutant);
	player.attack(mutant);
	player.attack(mutant);

	player.equip(rifle);
	RadScorpion *scorpy = new RadScorpion();
	player.attack(scorpy);
	player.attack(scorpy);
	std::cout << player;
	player.attack(scorpy);
	player.recoverAP();
	std::cout << player;
	player.attack(scorpy);

}

void main_officiel()
{
	Character* zaz = new Character("zaz");
	std::cout << *zaz;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);
	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
}

int	main()
{
	// std::cout << "TEST WEAPONS/ENEMY ===========" << std::endl;
	// main1();
	// std::cout << "TEST CHARACTER ===========" << std::endl;
	// main2();
	// std::cout << "OFFICIEL ===========" << std::endl;
	main_officiel();
	return 1;
}
