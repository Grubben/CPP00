#include "Account.hpp"
#include <iostream>

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	std::cout << "display account infos" << std::endl;
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 1;
	_nbWithdrawals = 0;
}

Account::~Account(void)
{
	std::cout << "Account destructor called" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_totalNbDeposits++;
	_nbDeposits++;
	_totalAmount += deposit;
	_amount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (_amount >= withdrawal)
	{
		_totalAmount -= withdrawal;
		_amount -= withdrawal;
		_totalNbWithdrawals++;
		return (true);
	}
	else
		return (false);
}
