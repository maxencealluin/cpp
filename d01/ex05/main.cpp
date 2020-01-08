/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:28:44 by malluin           #+#    #+#             */
/*   Updated: 2020/01/08 17:25:28 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main()
{
Human bob;
        std::cout << bob.identify() << std::endl;
        std::cout << bob.getBrain().identify() << std::endl;
}
