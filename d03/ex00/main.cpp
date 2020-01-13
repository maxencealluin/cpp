/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 12:27:11 by malluin           #+#    #+#             */
/*   Updated: 2020/01/13 13:16:29 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main()
{
	FragTrap robot("robot");
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
	return 1;
}
