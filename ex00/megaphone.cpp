/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 14:32:20 by malluin           #+#    #+#             */
/*   Updated: 2019/08/15 14:47:36 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*to_upper(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		str[i] = (str[i] >= 97 and str[i] <= 122) ? str[i] - 32: str[i];
	return str;
}

int		main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; i++)
			std::cout << to_upper(av[i]);
	std::cout << std::endl;
	}
	return 1;
}
