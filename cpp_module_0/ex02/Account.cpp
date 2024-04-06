/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 21:15:11 by smarty            #+#    #+#             */
/*   Updated: 2024/04/07 00:45:14 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <string>
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	std::time_t time_since = std::time(nullptr);
	std::tm* time = std::localtime(&time_since);

    char buffer[80];
    std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", time);
    std::cout << buffer;
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout  << " accounts:" << _nbAccounts << ";amount:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit )
{
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts = this->_accountIndex + 1;
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account( void )
{
	this->_amount = 0;
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;

}

void	Account::makeDeposit( int deposit )
{
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << "p_amount:" << this->_amount << ";deposit:" << deposit << ";amount:" << (this->_amount + deposit) << ";nb_deposits:" << (this->_nbDeposits + 1) << std::endl;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (this->_amount - withdrawal >= 0)
	{
		this->_displayTimestamp();
		std::cout << " index:" << this->_accountIndex << "p_amount:" << this->_amount << ";withdrawal:" << withdrawal << ";amount:" << (this->_amount - withdrawal) << ";nb_withdrawal:" << (this->_nbWithdrawals + 1) << std::endl;

		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
		return (1);
	}
	else
	{
		this->_displayTimestamp();
		std::cout << " index:" << this->_accountIndex << "p_amount:" << this->_amount << ";withdrawal:" << "refused" << std::endl;
		return (0);
	}
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	this->_displayTimestamp();
	std::cout  << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}