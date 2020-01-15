/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:13:19 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 14:55:49 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{

	public:
		SuperMutant();
		SuperMutant(SuperMutant const & instance);
		~SuperMutant();

		SuperMutant &	operator=(SuperMutant const & rhs);
		void			takeDamage(int);
};

#endif
