/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 18:27:17 by malluin           #+#    #+#             */
/*   Updated: 2020/01/21 11:51:24 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

char	randalphanum(void)
{
	if (std::rand() % 2 == 0)
		return 97 + std::rand() % 26;
	else
		return 48 + std::rand() % 10;
}

void * serialize(void)
{
	char * chain = new char [20];
	int i = -1;

	while (++i < 8)
		chain[i] = randalphanum();
	i = 7;
	while (++i < 12)
	{
		int n = std::rand() % 256;
		chain[i] = n;
	}
	std::cout << "INTEGER: " << *reinterpret_cast<int *>(&(chain[8])) << std::endl;
	i = 11;
	while (++i < 20)
		chain[i] = randalphanum();
	chain[20] = '\0';
	return reinterpret_cast<void *>(chain);
}

Data * deserialize(void * raw)
{
	char * str = reinterpret_cast<char *>(raw);
	Data  * data = new Data();
	int length = std::string(str).length();

	data->s1 = "";
	data->s2 = "";
	for (int i = 0; i < 8; i++)
		data->s1 += str[i];
	data->s1[8] = '\0';
	data->n = *reinterpret_cast<int *>(&(str[8]));
	for (int i = 0; i < 8; i++)
		data->s2 += str[length - 8 + i];
	data->s1[20] = '\0';
	return data;
}
