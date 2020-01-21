/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 18:26:54 by malluin           #+#    #+#             */
/*   Updated: 2020/01/21 11:49:20 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

int		main()
{
	void * data;
	data = serialize();
	std::cout << "raw string: " << reinterpret_cast<char *>(data) << std::endl;
	Data * test = deserialize(data);
	std::cout << "string1: " << test->s1 << std::endl;
	std::cout << "int: " << test->n << std::endl;
	std::cout << "string2: " << test->s2 << std::endl;
	return 1;
}
