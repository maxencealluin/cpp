/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 14:44:42 by malluin           #+#    #+#             */
/*   Updated: 2020/01/22 16:22:58 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.cpp"

int		main()
{
	Array<int> empty;
	Array<int> ten(10);

	std::cout << std::endl << "INITIALIZED" << std::endl;
	for (int i = 0; i < ten.size(); i++)
		std::cout << ten[i] << std::endl;
	for (int i = 2; i < 8; i++)
		ten[i] = i * i * 3;
	std::cout << "SIZE: " << empty.size() << " " << ten.size() << std::endl;
	std::cout << std::endl << "MODIFIED" << std::endl;
	for (int i = 0; i < ten.size(); i++)
		std::cout << ten[i] << std::endl;

	std::cout << std::endl << "COPY" << std::endl;
	Array<int> ten2(ten);
	for (int i = 0; i < ten2.size(); i++)
		std::cout << ten2[i] << std::endl;

	try {
		std::cout << "ACCESSING UNALLOCATED MEMORY:" << std::endl;
		std::cout << ten2[15] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 1;
}
