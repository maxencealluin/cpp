/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 16:47:06 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 16:47:38 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

class ISpaceMarine
{
public:
       virtual ~ISpaceMarine() {}
       virtual ISpaceMarine* clone() const = 0;
       virtual void battleCry() const = 0;
       virtual void rangedAttack() const = 0;
       virtual void meleeAttack() const = 0;
};

#endif
