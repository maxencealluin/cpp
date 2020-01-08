/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:59:52 by malluin           #+#    #+#             */
/*   Updated: 2020/01/08 16:16:27 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
public:
	Zombie();
	~Zombie();
	void	announce() const;
	void	setName(std::string name);
	void	setType(std::string type);

private:
	std::string	type;
	std::string	name;
};


#endif
