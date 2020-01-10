/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 11:21:33 by malluin           #+#    #+#             */
/*   Updated: 2020/01/10 11:21:33 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main()
{
	Human h;

	h.action("melee", "the giant spider");
	h.action("ranged", "the summoner");
	h.action("shout", "the wolves");
}
