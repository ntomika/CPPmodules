#include "Account.hpp"
#include <iostream>
#include  <iomanip>
#include <ctime> 

Account::Account( int initial_deposit )
{
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex += this->_nbAccounts;
	std::cout << "index:" << this->_accountIndex;
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
	this->_displayTimestamp();
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
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';'
	<< "amount:" << _amount << ';'
	<< "closed" << std::endl;
}

void	_displayTimestamp( void )
{
	struct std::tm time;

	std::get_time(&time, "%c");
	std::cout << '[';
	std::cout << time.tm_year 
	<< time.tm_mon 
	<< time.tm_mday << '_'
	<< time.tm_hour 
	<< time.tm_min 
	<< time.tm_sec
	<< "] ";
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
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'
	<< "p_amount:" << this->_amount << ';';
	if (!withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	else
	{
		std::cout<< "withdrawal:" << withdrawal << ';'
		<< "amount:" << this->_amount - withdrawal << ';'
		<< "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	return (true);
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'
	<< "p_amount:" << this->_amount << ';'
	<< "deposit:" << deposit << ';';
	this->_amount += deposit;
	std::cout << "amount:" << this->_amount << ';'
	<< "nb_deposits:" << this->_nbDeposits << std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'
	<< "amount:" << this->_amount << ';'
	<< "deposits:" << this->_nbDeposits << ';'
	<< "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "account:" << getNbAccounts() << ';'
	<< "total:" << getTotalAmount() << ';'
	<< "deposits:" << getNbDeposits() << ';'
	<< "withdrawals:" << getNbWithdrawals() << std::endl;
}
