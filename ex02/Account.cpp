/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:16:48 by carbon-m          #+#    #+#             */
/*   Updated: 2025/10/31 13:45:43 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account (void)
{
	return ;
}

Account::Account ( int initial_deposit ) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::_displayTimestamp (void)
{
	time_t		t;	
	tm		*timeinfo;

	t = std::time(0);
	timeinfo = std::localtime(&t);
	std::cout << "[" << (timeinfo->tm_year + 1900) 
		<< std::setw(2) << std::setfill('0') << (timeinfo->tm_mon + 1) 
		<< std::setw(2) << std::setfill('0') << timeinfo->tm_mday
		<< '_' 
		<< std::setw(2) << std::setfill('0') << timeinfo->tm_hour
		<< std::setw(2) << std::setfill('0') << timeinfo->tm_min
		<< std::setw(2) << std::setfill('0') << timeinfo->tm_sec
		<< "] ";
}

int Account::getNbAccounts (void)
{
    return _nbAccounts;
}

int Account::getTotalAmount (void)
{
    return _totalAmount;
}

int Account::getNbDeposits (void)
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals (void)
{
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos (void)
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";"
		<< "total:" << Account::getTotalAmount() << ";"
		<< "deposits:" << Account::getNbDeposits() << ";"
		<< "withdrawals:" << Account::getNbWithdrawals() 
		<< std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int OrigAmount;

	OrigAmount = Account::_amount;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
    	<< ";p_amount:" << OrigAmount
    	<< ";deposit:" << deposit
    	<< ";amount:" << _amount
    	<< ";nb_deposits:" << _nbDeposits
		<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int OrigAmount;

	OrigAmount = Account::_amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
    << ";p_amount:" << OrigAmount;
	if (withdrawal > OrigAmount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
        return false;
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
    std::cout << ";withdrawal:" << withdrawal
		<< ";amount:" << _amount
    	<< ";nb_withdrawals:" << _nbWithdrawals
		<< std::endl;
	return 1;
}

int		Account::checkAmount( void ) const
{
	return _amount;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";"
		<< "amount:" << Account::_amount << ";"
		<< "deposits:" << Account::_nbDeposits << ";"
		<< "withdrawals:" << Account::_nbWithdrawals
		<< std::endl;
}
