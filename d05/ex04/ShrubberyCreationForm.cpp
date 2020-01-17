/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 15:00:25 by malluin           #+#    #+#             */
/*   Updated: 2020/01/16 16:17:56 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
Form("Anonymous", target, 145, 137)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	Form::operator = (rhs);
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream ofs;

	Form::execute(executor);
	ofs.open(this->getTarget() + "_shrubbery");
    ofs << "                                                 . " << std::endl;
    ofs << "                                      .         ;   " << std::endl;
    ofs << "         .              .              ;%     ;;    " << std::endl;
    ofs << "           ,           ,                :;%  %;    " << std::endl;
    ofs << "            :         ;                   :;%;'     .,    " << std::endl;
    ofs << "   ,.        %;     %;            ;        %;'    ,; " << std::endl;
    ofs << "     ;       ;%;  %%;        ,     %;    ;%;    ,%' " << std::endl;
    ofs << "      %;       %;%;      ,  ;       %;  ;%;   ,%;'  " << std::endl;
    ofs << "       ;%;      %;        ;%;        % ;%;  ,%;' " << std::endl;
    ofs << "        `%;.     ;%;     %;'         `;%%;.%;' " << std::endl;
    ofs << "         `:;%.    ;%%. %@;        %; ;@%;%' " << std::endl;
    ofs << "            `:%;.  :;bd%;          %;@%;' " << std::endl;
    ofs << "              `@%:.  :;%.         ;@@%;'    " << std::endl;
    ofs << "                `@%.  `;@%.      ;@@%;          " << std::endl;
    ofs << "                  `@%%. `@%%    ;@@%;         " << std::endl;
    ofs << "                    ;@%. :@%%  %@@%;        " << std::endl;
    ofs << "                      %@bd%%%bd%%:;      " 			<< std::endl;
    ofs << "                        #@%%%%%:;; " 				<< std::endl;
    ofs << "                        %@@%%%::; " 				<< std::endl;
    ofs << "                        %@@@%(o);  . '          "	 << std::endl;
    ofs << "                        %@@@o%;:(.,'          " << std::endl;
    ofs << "                    `.. %@@@o%::;          " << std::endl;
    ofs << "                       `)@@@o%::;          " << std::endl;
    ofs << "                        %@@(o)::;         " << std::endl;
    ofs << "                       .%@@@@%::;          " << std::endl;
    ofs << "                       ;%@@@@%::;.           " << std::endl;
    ofs << "                      ;%@@@@%%:;;;.  " << std::endl;
    ofs << "                  ...;%@@@@@%%:;;;;,..   " << std::endl;
	ofs.close();
}
