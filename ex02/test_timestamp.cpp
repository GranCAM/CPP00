/* ************************************************************************** */
/*                                                                            */
/*   test_timestamp.cpp - Simple test for timestamp functionality            */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int main( void ) {
	std::cout << "=== Testing _displayTimestamp function ===" << std::endl;
	std::cout << std::endl;
	
	// Test 1: Create an account (this will call _displayTimestamp)
	std::cout << "Creating account with 100 deposit:" << std::endl;
	Account acc1(100);
	
	std::cout << std::endl;
	
	// Test 2: Create another account
	std::cout << "Creating account with 50 deposit:" << std::endl;
	Account acc2(50);
	
	std::cout << std::endl;

	std::cout << "final:";
	Account::displayAccountsInfos();
	std::cout << std::endl;
	
	// Test 3: Accounts will be destroyed when main ends (calls destructor with timestamp)
	std::cout << "Program ending - accounts will be destroyed:" << std::endl;
	


	return 0;
}
