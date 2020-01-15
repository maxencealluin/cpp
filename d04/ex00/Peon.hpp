/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 12:05:10 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 12:36:43 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Peon_HPP
# define Peon_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim {
	public:
		Peon(std::string name);
		Peon(Peon & instance);
		~Peon();
		Peon & operator=(Peon & rhs);

		std::string getName() const;
		void		getPolymorphed() const;
	private:
		Peon();
};

std::ostream & operator<<(std::ostream & stream, Peon const & rhs);
#endif
