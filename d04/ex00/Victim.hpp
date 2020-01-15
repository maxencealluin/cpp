/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 12:05:10 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 13:23:49 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim {
	public:
		Victim(std::string name);
		Victim(Victim & instance);
		~Victim();
		Victim & operator=(Victim & rhs);

		std::string getName() const;
		virtual void	getPolymorphed() const;
	protected:
		Victim();
		std::string	_name;
};

std::ostream & operator<<(std::ostream & stream, Victim const & rhs);
#endif
