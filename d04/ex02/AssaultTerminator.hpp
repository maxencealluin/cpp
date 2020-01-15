/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:59:02 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 18:00:03 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ASSAULTERMINATOR_HPP
# define ASSAULTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator();
		AssaultTerminator(AssaultTerminator const & instance);
		AssaultTerminator & operator=(AssaultTerminator const & rhs);
		~AssaultTerminator();
		AssaultTerminator* clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
		int		_id;
	private:
		static 	int	_nextId ;
};
#endif
