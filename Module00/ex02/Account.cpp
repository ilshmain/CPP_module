#include "Account.hpp"
#include <iostream>
#include <time.h>

int		Account::_nbAccounts;
int		Account::_totalAmount;
int		Account::_totalNbDeposits;
int		Account::_totalNbWithdrawals;

int	Account::getNbAccounts(void)
{
	return _nbAccounts;
}
int	Account::getTotalAmount(void)
{
	return _totalAmount;
}
int	Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}
int	Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void Account::_displayTimestamp() {
	std::time_t		t = std::time(0);
	std::tm* 		now = std::localtime(&t);

	std::cout		<< "[" << now->tm_year + 1900
					 << now->tm_mon + 1
					 << now->tm_mday << "_"
					 << now->tm_hour
					 << now->tm_min
					 << now->tm_sec << "] ";
}

Account::Account(int initial_deposit) : _amount(initial_deposit),
										_accountIndex(_nbAccounts),
										_nbDeposits(0),
										_nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << _amount << ";" << "created"
			  << std::endl;
}

void Account::displayAccountsInfos() {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";"
			  << "total:" << _totalAmount << ";"
			  << "deposits:" << _totalNbDeposits << ";"
			  << "withdrawals:" << _totalNbWithdrawals << ";"
			  << std::endl;
}

void Account::displayStatus() const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << _amount << ";"
			  << "deposits:" << _nbDeposits << ";"
			  << "withdrawals:" << _nbWithdrawals << ";"
			  << std::endl;
}

void Account::makeDeposit(int deposit) {
	_nbDeposits++;
	_displayTimestamp();

	_totalNbDeposits++;
	std::cout << "index:" << _accountIndex << ";"
			  << "p_amount:" << _amount << ";"
			  << "deposits:" << deposit << ";";
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << "amount:" << _amount << ";"
	          << "nb_deposits:" << _nbDeposits << ";"
			  << std::endl;
}

Account::~Account() {}

