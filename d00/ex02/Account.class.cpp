/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malluin <malluin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 15:34:23 by malluin           #+#    #+#             */
/*   Updated: 2020/01/07 18:53:27 by malluin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	Account::_totalNbDeposits += 1;
	this->_nbDeposits += 1;
	std::cout << "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount << ";deposit:"
		<< deposit << ";amount:" << this->_amount + deposit
		<< ";nb_deposits:" << this->_nbDeposits << std::endl;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	if (this->_amount >= withdrawal)
	{
		this->_nbWithdrawals += 1;
		Account::_totalNbWithdrawals += 1;
		std::cout << "index:" << this->_accountIndex
			<< ";p_amount:" << this->_amount << ";withdrawal:"
			<< withdrawal << ";amount:" << this->_amount - withdrawal
			<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		return true;
	}
	else
	{
		std::cout << "index:" << this->_accountIndex
			<< ";p_amount:" << this->_amount << ";withdrawal:refused"
			<< std::endl;
		return false;
	}
}

void Account::displayStatus() const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

int	Account::getNbAccounts( void )
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts()
		<< ";total:" << Account::getTotalAmount() << ";deposits:"
		<< Account::getNbDeposits() << ";withdrawals:"
		<< Account::getNbWithdrawals() << std::endl;
	return;
}

int		Account::checkAmount() const
{
	return this->_amount;
}
#include <ctime>
#include <iomanip>
void	Account::_displayTimestamp()
{
	time_t t = time(NULL);
	tm* tm = localtime(&t);
	std::cout << std::setfill('0');
	std::cout << "["
	<< std::setw(4) << tm->tm_year + 1900
	<< std::setw(2) << tm->tm_mon + 1
	<< std::setw(2) << tm->tm_mday
	<< "_"
	<< std::setw(2) << tm->tm_hour
	<< std::setw(2) << tm->tm_min
	<< std::setw(2) << tm->tm_sec
	<< "]";
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this-> _nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
		<< initial_deposit << ";created" << std::endl;
	Account::_nbAccounts += 1;
}


Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";amount:" << this->_amount << ";closed" << std::endl;
}
