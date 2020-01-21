/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 18:29:43 by malluin           #+#    #+#             */
/*   Updated: 2020/01/20 18:53:47 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include <iostream>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

void * serialize(void);
Data * deserialize(void * raw);


#endif
