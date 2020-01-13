/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 12:27:11 by malluin           #+#    #+#             */
/*   Updated: 2020/01/13 17:12:01 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main()
{
	FragTrap robot("Fragy");
	FragTrap robot2(robot);
	ScavTrap srobot("Scavy");
	ScavTrap srobot2(srobot);

	//
	robot.rangedAttack("player");
	robot2.rangedAttack("player");
	srobot.rangedAttack("player");
	srobot2.rangedAttack("player");

	// robot.meleeAttack("player");
	robot.takeDamage(20);
	robot2.takeDamage(20);
	srobot.takeDamage(20);
	srobot2.takeDamage(20);

	std::cout  << std::endl << "test equal" << std::endl;
	ScavTrap srobot3("testy");
	srobot3 = srobot2;
	srobot3.takeDamage(20);

	std::cout << std::endl << "test copy" << std::endl;
	ScavTrap srobot4(srobot2);
	srobot4.takeDamage(20);

	robot.beRepaired(20);
	robot2.beRepaired(20);
	srobot.beRepaired(20);
	srobot2.beRepaired(20);

	robot.vaulthunter_dot_exe("enemy");
	robot2.vaulthunter_dot_exe("enemy");
	srobot.challengeNewcomer();
	srobot2.challengeNewcomer();
	std::cout << std::endl;
	return 1;
}
