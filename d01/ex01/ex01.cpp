/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:46:09 by malluin           #+#    #+#             */
/*   Updated: 2020/01/08 13:00:11 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak()
{
	std::string*        panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}

int		main()
{
	memoryLeak();
}
