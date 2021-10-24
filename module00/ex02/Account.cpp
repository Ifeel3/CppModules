#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
	<< ";amount:" << this->checkAmount()
	<< ";created" <<std::endl;
}

Account::~Account(void) {
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
	<< ";amount:" << this->checkAmount()
	<< ";closed" << std::endl;
}

int Account::checkAmount() const {
	return (this->_amount);
}

void Account::_displayTimestamp() {
	std::time_t t = std::time(nullptr);
	std::cout << "[" << std::put_time(std::localtime(&t), "20%y%m%d_%OH%OM%OS") << "]";
}

int Account::getNbAccounts() {
	return (_nbAccounts);
}

int Account::getNbDeposits() {
		return(_totalNbDeposits);
}

int Account::getNbWithdrawals() {
	return (_totalNbWithdrawals);
}

int Account::getTotalAmount() {
	return (_totalAmount);
}

void Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
	<< ";p_amount:" << this->checkAmount()
	<< ";deposit:" << deposit
	<< ";amount:" << this->checkAmount() + deposit
	<< ";nb_deposits:" << this->_nbDeposits + 1 << std::endl;
	this->_nbDeposits++;
	this->_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
	<< ";p_amount:" << this->checkAmount()
	<< ";withdrawal:";
	if (withdrawal > this->_amount) {
		std::cout << "refused" << std::endl;
		return (false);
	}
	else if (withdrawal <= this->_amount) {
		std::cout << withdrawal
		<< ";amount:" << this->checkAmount() - withdrawal
		<< ";nb_withdrawals:" << this->_nbWithdrawals + 1 << std::endl;
		this->_nbWithdrawals++;
		_totalNbWithdrawals++;
	}
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	return (true);
}

void Account::displayAccountsInfos() {
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts()
	<< ";total:" << getTotalAmount()
	<< ";deposits:" << getNbDeposits()
	<< ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::displayStatus() const {
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
	<< ";amount:" << this->checkAmount()
	<< ";deposits:" << this->_nbDeposits
	<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}