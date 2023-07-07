#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _nbAccounts << ";amount:"
		<< initial_deposit << ";created" << std::endl;
	++_nbAccounts;
	return ;
}

Account::~Account(void)
{
	--_nbAccounts;
	_displayTimestamp();
	std::cout << "index:" << _nbAccounts << ";amount:"
		<< checkAmount() << ";closed" << std::endl;
	return ;
}

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

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:"
		<< _totalAmount << ";deposits:" << _totalNbDeposits
		<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
	return ;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	++_totalNbDeposits;
	++_nbDeposits;
	_totalAmount += deposit;
	_amount += deposit;
	std::cout << ";deposit:" << deposit << ";amount:" << _amount
		<< ";nb_deposits:" << _nbDeposits << std::endl;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
		<< ";withdrawal:";
	if (_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return false;
	}

	++_totalNbWithdrawals;
	++_nbWithdrawals;
	_totalAmount -= withdrawal;
	_amount -= withdrawal;
	std::cout << withdrawal <<";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return true;
}

int		Account::checkAmount(void) const
{
	return _amount;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
	<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
	return ;
}

void	Account::_displayTimestamp(void)
{
	time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "[%Y%m%d_%I%M%S]", &tstruct);
	std::cout << buf << " ";
	return ;
}