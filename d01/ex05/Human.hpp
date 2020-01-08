/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:28:59 by malluin           #+#    #+#             */
/*   Updated: 2020/01/08 17:28:44 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human {
public:
	std::string	identify() const;
	const Brain	&getBrain() const;
	Human();
	~Human();

private:
	const	Brain brain;
};
#endif
