/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 16:38:43 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 18:17:37 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

// # define NULL 0

#include "ISquad.hpp"
#include "TacticalMarine.hpp"
#include <iostream>

typedef struct		s_list {
	ISpaceMarine	*unit;
	struct s_list	*next;
}					t_list;

class Squad : public ISquad
{
	public:
		Squad();
		Squad(Squad const & instance);
		Squad & operator=(Squad const & rhs);
		~Squad();
		int				getCount() const;
		ISpaceMarine*	getUnit(int) const;
		int				push(ISpaceMarine*);

	private:
		int				_count;
		t_list*			_units;
};

#endif
