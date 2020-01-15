/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:13:19 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 14:55:58 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{

	public:
		RadScorpion();
		RadScorpion(RadScorpion const & instance);
		~RadScorpion();

		RadScorpion &	operator=(RadScorpion const & rhs);
};

#endif
