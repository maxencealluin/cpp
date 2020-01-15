/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 16:38:38 by malluin           #+#    #+#             */
/*   Updated: 2020/01/15 18:32:44 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _count(0), _units(0)
{
}

Squad::Squad(Squad const & instance)
{
	*this = instance;
}

Squad::~Squad()
{
	if (this->_count > 0)
	{
		t_list *ptr = this->_units;
		while (ptr)
		{
			t_list *tmp = ptr->next;
			delete ptr->unit;
			delete ptr;
			ptr = tmp;
		}
		this->_count = 0;
	}
}

Squad & Squad::operator=(Squad const & rhs)
{
	if (this->_count > 0)
	{
		t_list *ptr = this->_units;
		while (ptr)
		{
			t_list *tmp = ptr->next;
			delete ptr->unit;
			ptr->next = 0;
			ptr = 0;
			delete ptr;
			ptr = tmp;
		}
		this->_count = 0;
	}
	this->_units = 0;
	Squad	*nUnit = new Squad();
	for (int i = 0; i < rhs.getCount(); i++)
		this->push(new TacticalMarine());
	return *nUnit;
}

int				Squad::getCount() const
{
	return this->_count;
}

ISpaceMarine*	Squad::getUnit(int n) const
{
	if (n >= this->_count)
		return NULL;
	t_list *tmp = this->_units;
	int		i = 0;
	while (tmp)
	{
		if (i == n)
			return tmp->unit;
		tmp = tmp->next;
		i++;
	}
	return NULL;
}

int				Squad::push(ISpaceMarine* unit)
{
	if (unit == NULL)
		return this->_count;
	t_list *tmp = this->_units;
	while (tmp)
	{
		if (tmp->unit == unit)
		{
			return this->_count;
		}
		tmp = tmp->next;
	}
	t_list *ptr = new t_list();
	if (!(this->_units))
	{
		ptr->unit = unit;
		ptr->next = NULL;
		this->_units = ptr;
	}
	else
	{
		t_list *tmp = this->_units;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = ptr;
		ptr->unit = unit;
		ptr->next = NULL;
	}
	this->_count += 1;
	return this->_count;
}
