/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 11:39:13 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 12:19:18 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer {
	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer & instance);
		~Sorcerer();
		Sorcerer & operator=(Sorcerer & rhs);

		std::string getName() const;
		std::string getTitle() const;
		void		polymorph(Victim const & victim) const;
	private:
		Sorcerer();
		std::string	_name;
		std::string	_title;
};

std::ostream & operator<<(std::ostream & stream, Sorcerer const & rhs);
#endif
