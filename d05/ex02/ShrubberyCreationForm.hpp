/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 11:22:44 by malluin           #+#    #+#             */
/*   Updated: 2020/01/16 16:14:23 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class Bureaucrat;

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm(std::string);
		~ShrubberyCreationForm();
		ShrubberyCreationForm &	operator=(ShrubberyCreationForm const & rhs);
		void	execute(Bureaucrat const & executor) const;
	private:
		ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const & instance);

};

std::ostream &	operator<<(std::ostream & stream, Form const & rhs);

#endif
