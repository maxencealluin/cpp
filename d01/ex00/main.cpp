/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 11:41:54 by malluin           #+#    #+#             */
/*   Updated: 2020/01/08 12:56:57 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

void	ponyOnTheHeap(std::string color, std::string name)
{
	Pony* heap = new Pony(color, name);

	heap->rainbowdash();
	delete heap;
}

void	ponyOnTheStack(std::string color, std::string name)
{
	Pony stack(color, name);
	stack.rainbowdash();
}

int		main(void)
{
	ponyOnTheHeap("red", "Poe");
	ponyOnTheStack("pink", "Lala");
	std::cout << "No more ponies..." << std::endl;
	return 1;
}
