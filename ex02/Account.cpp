/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 16:16:31 by kmeixner          #+#    #+#             */
/*   Updated: 2022/05/09 09:49:23 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts( void ) {
	return (Account::_nbAccounts);
}

int Account::getTotalAmount( void ) {
	return (Account::_totalAmount);
}

int Account::getNbDeposits( void ) {
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals( void ) {
	return (Account::_totalNbWithdrawals);
}

void Account::_displayTimestamp( void ) {
	time_t t = time(NULL);
	tm  *tptr = localtime(&t);

	std::cout << "[" << tptr->tm_year + 1900;
	if (tptr->tm_mon < 10) std::cout << 0;
	std::cout << tptr->tm_mon;
	if (tptr->tm_mday < 10) std::cout << 0;
	std::cout << tptr->tm_mday << "_";
	if (tptr->tm_hour < 10) std::cout << 0;
	std::cout << tptr->tm_hour;
	if (tptr->tm_min < 10) std::cout << 0;
	std::cout << tptr->tm_min ;
	if (tptr->tm_sec < 10) std::cout << 0;
	std::cout << tptr->tm_sec << "] ";
}

void	Account::displayAccountsInfos( void ){
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::displayStatus( void ) const{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_totalNbDeposits++;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << ++this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal) {
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "withdrawal:";
	if (withdrawal > this->_amount) {
		std::cout << "refused" << std::endl;
		return (false);
	}
	std::cout << withdrawal << ";";
	this->_amount -= withdrawal;
	this->_totalAmount -= withdrawal;
	this->_totalNbWithdrawals++;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_withdrawals:" << ++this->_nbWithdrawals << std::endl;
	return (true);
}

Account::Account( int initial_deposit) :
_accountIndex(this->_nbAccounts),
_amount(initial_deposit),
_nbDeposits(0),
_nbWithdrawals(0) {
	this->_nbAccounts++;
	this->_totalAmount += initial_deposit;
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account() {
	this->_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}