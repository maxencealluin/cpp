/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 11:04:19 by malluin           #+#    #+#             */
/*   Updated: 2020/01/28 11:50:17 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <iostream>

template <typename T>
typename T::iterator easyfind(T cont, int nb)
{
	typename T::iterator it;
	it = std::find(cont.begin(), cont.end(), nb);
	if (it != cont.end())
	{
		std::cout << "Found element " << nb << " at position " << std::distance(cont.begin(), it) << std::endl;
		return it;
	}
	else
	{
		std::cout << "Element " << nb << " not found" << std::endl;
		return it;
	}
}

int		main()
{
	std::cout << "With list:" << std::endl;
	std::list<int> lst;

	lst.push_back(0);
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(31);
	std::cout << *easyfind(lst, 31) << std::endl;
	std::cout << *easyfind(lst, 2) << std::endl;
	std::cout << *easyfind(lst, 1) << std::endl;
	std::cout << *easyfind(lst, 0) << std::endl;
	std::cout << *easyfind(lst, 42) << std::endl;

	std::cout << "With vector:" << std::endl;

	std::vector<int> vec;

	vec.push_back(0);
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(31);
	std::cout << *easyfind(vec, 31) << std::endl;
	std::cout << *easyfind(vec, 2) << std::endl;
	std::cout << *easyfind(vec, 1) << std::endl;
	std::cout << *easyfind(vec, 0) << std::endl;
	std::cout << *easyfind(vec, 42) << std::endl;

	return 1;
}
