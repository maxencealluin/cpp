/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 12:17:08 by malluin           #+#    #+#             */
/*   Updated: 2020/01/22 13:54:47 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

template< typename T>
void	iter(T *array, const int length, void(*map)(T &))
{
	for (int i = 0; i < length; i++)
		map(array[i]);
}

template< typename T>
void mult(T & nb)
{
	std::cout << nb << std::endl;
}

int		main()
{
	std::cout << "With ints:" << std::endl;
	int * suite = new int[8];
	for (int i = 0; i < 8; i++)
		suite[i] = i * i;
	iter<int>(suite, 8, &mult);

	std::cout << std::endl << "With floats:" << std::endl;
	float * suitef = new float[16];
	for (int i = 0; i < 16; i++)
		suitef[i] = i * (i + 0.1f);
	iter<float>(suitef, 16, &mult);

	std::cout << std::endl << "With strings:" << std::endl;
	std::string suites[4] = {"test", "test1", "test2", "test3"};
	iter<std::string>(suites, 4, &mult);
}
