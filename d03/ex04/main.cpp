/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 12:27:11 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 11:24:13 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "SuperTrap.hpp"

int		main()
{
	// ClapTrap master("master");
	//
	// FragTrap robot("Fragy");
	// FragTrap robot2(robot);
	// ScavTrap srobot("Scavy");
	// ScavTrap srobot2(srobot);
	//
	// //
	// robot.rangedAttack("player");
	// robot2.rangedAttack("player");
	// srobot.rangedAttack("player");
	// srobot2.rangedAttack("player");
	//
	// robot.takeDamage(20);
	// robot2.takeDamage(20);
	// srobot.takeDamage(20);
	// srobot2.takeDamage(20);
	//
	// ScavTrap srobot3("testy");
	// srobot3 = srobot2;
	// srobot3.takeDamage(20);
	//
	// robot.beRepaired(20);
	// robot2.beRepaired(20);
	// srobot.beRepaired(20);
	// srobot2.beRepaired(20);
	//
	// robot.vaulthunter_dot_exe("enemy");
	// robot2.vaulthunter_dot_exe("enemy");
	// srobot.challengeNewcomer();
	// srobot2.challengeNewcomer();
	//
	// std::cout << "==== NINJA ==== "<<std::endl;
	//
	// NinjaTrap ninja("NinjaBot");
	// NinjaTrap ninja2(ninja);
	//
	// std::cout << std::endl;
	//
	// ninja.ninjaShoebox(ninja2);
	// std::cout << std::endl;
	// ninja.ninjaShoebox(robot);
	// std::cout << std::endl;
	// ninja.ninjaShoebox(srobot);
	// std::cout << std::endl;
	// ninja.ninjaShoebox(master);
	// std::cout << std::endl;
	//

	std::cout << "==== SUPER ==== "<<std::endl;
	SuperTrap super("superBot");
	super.showStats();
	std::cout << std::endl;
	SuperTrap super2(super);
	super2.showStats();
	std::cout << std::endl;

	super.rangedAttack("player");
	super.meleeAttack("player");
	super.takeDamage(20);
	super.beRepaired(20);
	std::cout << std::endl;
	return 1;
}
