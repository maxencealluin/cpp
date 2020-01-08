/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:20:20 by malluin           #+#    #+#             */
/*   Updated: 2020/01/08 16:23:13 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main()
{
	std::string text = "HI THIS IS BRAIN";
	std::string* ptr = &text;
	std::string& ref = text;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
}
