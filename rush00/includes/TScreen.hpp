/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TScreen.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:26:39 by malluin           #+#    #+#             */
/*   Updated: 2020/01/24 17:28:25 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCREEN_HPP
# define SCREEN_HPP

#include "resources.hpp"
#include "AMovingEntity.hpp"

class TScreen {
	public:
		TScreen();
		~TScreen();
		void	borders();
		void	refresh_screen();
		void	gameOver();
		void	draw_entity(AMovingEntity *);
		void	draw_entity(AMovingEntity *, const char *);

	private:
		TScreen(TScreen & instance);
		TScreen & operator=(TScreen & rhs);
};

#endif
