/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 15:57:14 by malluin           #+#    #+#             */
/*   Updated: 2019/08/15 16:22:29 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {
public:

	Contact( void );
	~Contact( void );

	int			used;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string underwear_color;
	std::string darkest_secret;
	void	add(void);
};

#endif
