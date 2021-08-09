#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime> 

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'
	<< "amount:" << this->_amount << ';'
	<< "created" << std::endl;
}

// Account::Account( void )
// {
// 	this->_accountIndex += this->_nbAccounts;
// 	this->_amount = 0;
// 	this->_nbDeposits = 0;
// 	this->_nbWithdrawals = 0;
// 	_displayTimestamp();
// 	std::cout << "index:" << this->_accountIndex << ';'
// 	<< "amount:" << this->_amount << ';'
// 	<< "created" << std::endl;
// }

Account::~Account( void )
{
	Account::_displayTimestamp();
	this->_nbAccounts--;
	std::cout << "index:" << _accountIndex << ';'
	<< "amount:" << _amount << ';'
	<< "closed" << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t time;

	time = std::time(0);
	tm *local = localtime(&time);
	std::cout << '[';
	std::cout << 1900 + local->tm_year
	<< 1 + local->tm_mon
	<< local->tm_mday << '_'
	<< local->tm_hour
	<< local->tm_min
	<< local->tm_sec;
	std::cout << "] ";
}

int		Account::getNbAccounts( void )
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

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';'
	<< "p_amount:" << _amount << ';';
	if (!withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	else
	{
		std::cout<< "withdrawal:" << withdrawal << ';'
		<< "amount:" << _amount - withdrawal << ';'
		<< "nb_withdrawals:" << _nbWithdrawals << std::endl;
	}
	return (true);
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';'
	<< "p_amount:" << _amount << ';'
	<< "deposit:" << deposit << ';';
	_amount += deposit;
	std::cout << "amount:" << this->_amount << ';'
	<< "nb_deposits:" << _nbDeposits << std::endl;
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';'
	<< "amount:" << _amount << ';'
	<< "deposits:" << _nbDeposits << ';'
	<< "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "account:" << getNbAccounts() << ';'
	<< "total:" << getTotalAmount() << ';'
	<< "deposits:" << getNbDeposits() << ';'
	<< "withdrawals:" << getNbWithdrawals() << std::endl;
}
