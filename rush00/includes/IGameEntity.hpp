/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IGameEntity.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 13:51:35 by malluin           #+#    #+#             */
/*   Updated: 2020/01/23 17:55:48 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IGAMEENTITY_HPP
# define IGAMEENTITY_HPP

#include <iostream>
#include "resources.hpp"

typedef struct s_pos t_pos;

class IGameEntity {
	public:
		virtual void getHit() = 0;
		virtual const char	*getSkin() const = 0;
		virtual std::string getColor() const = 0;
		virtual t_pos & getPos() = 0;
};

#endif
