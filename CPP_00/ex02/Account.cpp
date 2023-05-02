/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:52:13 by fcatinau          #+#    #+#             */
/*   Updated: 2022/02/14 14:51:17 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"
#include <ctime>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void)
{
	time_t	current_time = time(0);
	tm		*time_now = localtime(&current_time);

	std::cout << "[";
	// std::cout << "19920104_091532";
	std::cout << 1900 + time_now->tm_year << std::setfill('0') << std::setw(2) << 1 + time_now->tm_mon << std::setfill('0') << std::setw(2) << time_now->tm_mday;
	std::cout << "_" << std::setfill('0') << std::setw(2) << time_now->tm_hour << std::setfill('0') << std::setw(2) << time_now->tm_min << std::setfill('0') << std::setw(2) << time_now->tm_sec;
	std::cout << "] ";
}

int	Account::getNbAccounts(void) {
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void){
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void){
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void) {
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:";
	std::cout << _totalAmount << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit ) : _amount(initial_deposit){
	_displayTimestamp();
	this->_accountIndex = _nbAccounts;
	std::cout << "index:" << this->_accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	return;
}

Account::~Account (void) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	_nbAccounts--;
}

void	Account::makeDeposit( int deposit ) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount << ";deposit:";
	this->_amount += deposit;
	_totalNbDeposits++;
	this->_nbDeposits++;
	_totalAmount += deposit;
	std::cout << deposit << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount << ";withdrawal:";
	if (this->_amount - withdrawal < 0) {
		std::cout << "refused" << std::endl;
		return (false);
	}
	this->_amount -= withdrawal;
	_totalNbWithdrawals++;
	this->_nbWithdrawals++;
	_totalAmount -= withdrawal;
	std::cout << withdrawal << ";amount:" << this->_amount;
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

int	Account::checkAmount(void) const {
	std::cout << "Do something" << std::endl;
	return (1);
}

void	Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
}
