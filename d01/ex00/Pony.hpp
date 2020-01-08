/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 11:41:59 by malluin           #+#    #+#             */
/*   Updated: 2020/01/08 12:37:45 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <string>

class Pony {
public:
	std::string	color;
	std::string	name;
	Pony(std::string c, std::string n);
	~Pony();
	void	rainbowdash() const;
};

#endif
