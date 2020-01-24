/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 11:22:44 by malluin           #+#    #+#             */
/*   Updated: 2020/01/20 13:05:15 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

#include "Intern.hpp"
#include "Bureaucrat.hpp"

class OfficeBlock {
	public:
		OfficeBlock();
		OfficeBlock(Intern *, Bureaucrat *, Bureaucrat *);
		~OfficeBlock();
		void			setNewIntern(Intern *);
		void			setNewSBureaucrat(Bureaucrat *);
		void			setNewEBureaucrat(Bureaucrat *);
		void			doBureaucracy(std::string, std::string);
		Intern *		getIntern();
		Bureaucrat *	getSBur();
		Bureaucrat *	getEBur();
	class BureaucracyException : public std::exception
	{
		public:
			BureaucracyException();
			BureaucracyException(BureaucracyException const & instance);
			~BureaucracyException() throw();
			virtual	const char* what() const throw();
			BureaucracyException & operator=(BureaucracyException const & rhs);
	};
	private:
		Intern * _intern;
		Bureaucrat * _sbureaucrat;
		Bureaucrat * _ebureaucrat;
		OfficeBlock *	operator=(OfficeBlock const * rhs);
		OfficeBlock(OfficeBlock const * instance);

};

#endif
