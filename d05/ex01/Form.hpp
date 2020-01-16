/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 11:22:44 by malluin           #+#    #+#             */
/*   Updated: 2020/01/16 14:39:23 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form(std::string, int, int);
		~Form();
		std::string			getName() const;
		int					getGradeSign() const;
		int					getGradeExec() const;
		bool				getSigned() const;
		void				beSigned(Bureaucrat &);
		Form &				operator=(Form const & rhs);
	private:
		Form();
		Form(Form const & instance);
		const	std::string _name;
		const	int			_grade_sign;
		const	int			_grade_exec;
		bool				_signed;

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

std::ostream &	operator<<(std::ostream & stream, Form const & rhs);

#endif
