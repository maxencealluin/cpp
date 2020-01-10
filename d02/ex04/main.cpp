/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 11:32:00 by malluin           #+#    #+#             */
/*   Updated: 2020/01/10 18:34:06 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <sstream>
#include <string>

float	read_nb(std::string expr, int & pos)
{
	float	nbr = 0;

	std::stringstream ss(expr.substr(pos));
	ss >> nbr;
	int g = ss.tellg();
	if (g != -1)
		pos += ss.tellg();
	else
		pos = expr.length() - 1;
	pos++;
	// std::cout << "TELLG " << ss.tellg() << " NBR " << nbr << " POS " << pos << std::endl;
	return nbr;
}

char	read_op(std::string expr, int & pos)
{
	char	c;

	std::stringstream ss(expr.substr(pos));
	ss >> c;
	pos += ss.tellg();
	pos++;
	return c;

}

bool	isoperator(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return true;
	return false;
}

float	operat(float nb1, float nb2, char c)
{
	if (c == '/')
		return (Fixed(nb1) / Fixed(nb2)).toFloat();
	else if (c == '+')
		return (Fixed(nb1) + Fixed(nb2)).toFloat();
	else if (c == '*')
		return (Fixed(nb1) * Fixed(nb2)).toFloat();
	else if (c == '-')
		return (Fixed(nb1) - Fixed(nb2)).toFloat();
	return 0;
}

float	parse_expr(std::string expr, int & pos, int const length)
{
	float	nbr = 0;
	float	nbr2 = 0;
	int		i = 0;
	char	op = 0;

	std::cout << "PARSING " << expr << " " << pos << std::endl;
	while (pos < length)
	{
		while (expr[pos] == ' ')
			pos++;
		if (isdigit(expr[pos]))
		{
			nbr = read_nb(expr, pos);
			std::cout << "NBR1 " << nbr << std::endl;
			op = read_op(expr, pos);
			std::cout << "OP " << op << std::endl;
			if (!isoperator(op))
				return Fixed(nbr).toFloat();
			if (op == '*' or op == '/')
				nbr2 = read_nb(expr, pos);
			else
				nbr2 = parse_expr(expr, pos, length);
			std::cout << "NBR2 " << nbr2 << std::endl;
		}
		else
			pos++;
		std::cout << "pos " << pos << std::endl;
	}
	// while (expr[i])
	// {
	// 	if (isdigit(expr[i]))
	// 	{
	// 		nbr = stoi(expr);
	// 	}
	// 	i++;
	// }

	return operat(nbr, nbr2, op);
}

bool	check_parenthesis(std::string expr)
{
	int		i = 0;
	int		par = 0;
	while(expr[i])
	{
		if (expr[i] == '(')
			par += 1;
		else if (expr[i] == ')')
			par -= 1;
		if (par < 0)
			return false;
		i++;
	}
	if (par != 0)
		return false;
	return true;
}

bool	check_alpha(std::string expr)
{
	int		i;

	i = 0;
	while (expr[i])
	{
		if (!isdigit(expr[i]) && !isoperator(expr[i]) && expr[i] != ' ')
			return false;
		i++;
	}
	return true;
}
//
// bool	check_order(std::string expr)
// {
// 	int		i;
// 	int foundint = 0;
//
// 	while (expr[i])
// 	{
// 		while (expr[i] == ' ')
// 		{
// 			if (!expr[i])
// 				return true;
// 			i++;
// 		}
// 		if (isdigit(expr[i]))
// 		{
// 			if (foundint)
// 				return false;
// 			while (isdigit(expr[i]))
// 				i++;
// 			foundint = 1;
// 		}
// 		while (expr[i] == ' ')
// 		{
// 			if (!expr[i])
// 				return true;
// 			i++;
// 		}
// 		if (expr[i] == '+' && expr[i] == '-' &&
// 			expr[i] == '*' && expr[i] == '/')
//
// 		i++;
// 	}
// }

int main (int ac, char **av)
{
	std::string expr;

	if (ac != 2)
	{
		std::cout << "Usage: ./eval_expr (expression)" << std::endl;
		return 0;
	}
	expr = av[1];
	if (check_parenthesis(expr) == false or check_alpha(expr) == false)
		// or check_order(expr))
	{
		std::cout << "Invalid expression." << std::endl;
		return 0;
	}
	int pos = 0;
	std::cout << parse_expr(expr, pos, expr.length()) << std::endl;
	return 1;
 }
