/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 11:22:44 by malluin           #+#    #+#             */
/*   Updated: 2020/01/16 14:39:13 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
	public:
		Bureaucrat(std::string, int);
		~Bureaucrat();
		std::string			getName() const;
		int					getGrade() const;
		void				increaseGrade();
		void				decreaseGrade();
		void				signForm(bool success, Form const & form);
		Bureaucrat & 		operator=(Bureaucrat const & rhs);
	private:
		Bureaucrat();
		Bureaucrat(Bureaucrat const & instance);
		const	std::string _name;
		int					_grade;

	class GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException();
			GradeTooHighException(GradeTooHighException const & instance);
			~GradeTooHighException() throw();
			virtual	const char* what() const throw();
			GradeTooHighException & operator=(GradeTooHighException const & rhs);
	};
	class GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException();
			GradeTooLowException(GradeTooLowException const & instance);
			~GradeTooLowException() throw();
			virtual	const char* what() const throw();
			GradeTooLowException & operator=(GradeTooLowException const & rhs);
	};
};

std::ostream &	operator<<(std::ostream & stream, Bureaucrat const & rhs);

#endif
