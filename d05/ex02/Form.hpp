/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 11:22:44 by malluin           #+#    #+#             */
/*   Updated: 2020/01/16 16:14:03 by malluin          ###   ########.fr       */
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
		Form(std::string, std::string, int, int);
		~Form();
		std::string			getName() const;
		std::string			getTarget() const;
		int					getGradeSign() const;
		int					getGradeExec() const;
		bool				getSigned() const;
		void				beSigned(Bureaucrat &);
		Form &				operator=(Form const & rhs);
		virtual void		execute(Bureaucrat const & executor) const = 0;
	private:
		Form();
		Form(Form const & instance);
		const	std::string _name;
		const	int			_grade_sign;
		const	int			_grade_exec;
		bool				_signed;
		std::string			_target;

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
	class NotSignedException : public std::exception
	{
		public:
			NotSignedException();
			NotSignedException(NotSignedException const & instance);
			~NotSignedException() throw();
			virtual	const char* what() const throw();
			NotSignedException & operator=(NotSignedException const & rhs);
	};
};

std::ostream &	operator<<(std::ostream & stream, Form const & rhs);

#endif
