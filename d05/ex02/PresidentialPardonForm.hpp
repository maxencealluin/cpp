/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 11:22:44 by malluin           #+#    #+#             */
/*   Updated: 2020/01/16 16:13:01 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm(std::string);
		~PresidentialPardonForm();
		PresidentialPardonForm &	operator=(PresidentialPardonForm const & rhs);
		void	execute(Bureaucrat const & executor) const;
	private:
		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const & instance);

};

std::ostream &	operator<<(std::ostream & stream, Form const & rhs);

#endif
