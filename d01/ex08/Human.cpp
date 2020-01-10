/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 11:21:37 by malluin           #+#    #+#             */
/*   Updated: 2020/01/10 11:21:37 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void Human::meleeAttack(std::string const & target)
{
	std::cout << "Human uses a melee attack on " << target << " !" << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
	std::cout << "Human uses a ranged attack on " << target << " !" << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
	std::cout << "Human uses intimidating shout on " << target << " !" << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{
	std::string names[3] = {
		"melee",
		"ranged",
		"shout"
	};
	void (Human::*ptrs [3])(std::string const &) = {
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};
	for (int i = 0; i < 3; i++)
	{
		if (names[i].compare(action_name) == 0)
			(this->*ptrs[i])(target);
	}
}
