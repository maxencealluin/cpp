/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 12:27:11 by malluin           #+#    #+#             */
/*   Updated: 2020/01/13 16:00:55 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int		main()
{

	std::cout << "============ FRAGTRAP ===================" << std::endl;
	FragTrap robot("FRAG robot");
	FragTrap robot2(robot);

	robot.rangedAttack("player");
	robot.meleeAttack("player");
	robot.takeDamage(20);
	robot.takeDamage(5);
	robot.takeDamage(100);
	robot.beRepaired(50);
	robot.takeDamage(45);
	robot.takeDamage(15);
	robot2.vaulthunter_dot_exe("enemy");
	robot2.vaulthunter_dot_exe("enemy");
	robot2.vaulthunter_dot_exe("enemy");
	robot2.vaulthunter_dot_exe("enemy");
	robot2.vaulthunter_dot_exe("enemy");
	robot2.vaulthunter_dot_exe("enemy");
	robot2.vaulthunter_dot_exe("enemy");
	robot2.vaulthunter_dot_exe("enemy");

	std::cout << "============ SCAVTRAP ===================" << std::endl;

	ScavTrap srobot("SCAV robot");
	ScavTrap srobot2(srobot);
	srobot.rangedAttack("player");
	srobot.meleeAttack("player");
	srobot.takeDamage(20);
	srobot.takeDamage(5);
	srobot.takeDamage(100);
	srobot.beRepaired(50);
	srobot.takeDamage(45);
	srobot.takeDamage(15);
	srobot2.challengeNewcomer();
	srobot2.challengeNewcomer();
	srobot2.challengeNewcomer();
	srobot2.challengeNewcomer();
	srobot2.challengeNewcomer();
	return 1;
}
