/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 15:57:14 by malluin           #+#    #+#             */
/*   Updated: 2020/01/07 12:12:20 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {
public:

	Contact( void );
	~Contact( void );

	int			idx;
	int			used;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string favorite_meal;
	std::string birthday_date;
	std::string underwear_color;
	std::string darkest_secret;
	void	add(void);
	void	display(void);
};

#endif
