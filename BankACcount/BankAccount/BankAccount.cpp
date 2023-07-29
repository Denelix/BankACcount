#include <iostream>
#include <string>
#include "Checkings.h"
#include "Savings.h"
#include "BankAccount.h"
//Apperently, dont make the classes here : )  
BankAccount::BankAccount(int accountNumber, double balance)
	: accountNumber(accountNumber), balance(balance)
{
}

std::string BankAccount::getAccountHolderName() const { return name; }
int BankAccount::getAccountNumber() const { return accountNumber; }
std::string BankAccount::getAccountType() const { return type; }
double BankAccount::getBalance() const { return balance; }
double BankAccount::getInterestRate() const { return interestRate; }

void BankAccount::deposit(double add) 
{
	balance += add;
}

void BankAccount::withdraw(double subtract) 
{
	//This is withdraw, people shouldn't get negative balances... unless rightfully charged lol.
	if (balance >= subtract) 
	{
		balance -= subtract;
	}
	else 
	{
		std::cout << "Error: Insufficient balance to withdraw.\n";
	}
}

double BankAccount::calculateInterest() 
{
	return interestRate * balance;
}

void BankAccount::updateBalance() 
{
	balance += calculateInterest();
}

void BankAccount::print() 
{
	std::cout << "Account Number: " << accountNumber <<
		"\nBalance: " << balance << "\n";
}


int main() 
{
	int accountNumber = 1000;
	//Pokemon names were easier to think of.
	Checkings Meowstic(accountNumber++, 1337);
	Checkings Delphox(accountNumber++, 4200);
	Savings Lucario(accountNumber++, 3926);
	Savings Lopunny(accountNumber++, 3621);
	Meowstic.deposit(1000);
	Delphox.deposit(2300);
	Lucario.deposit(800);
	Lopunny.deposit(500);
	Meowstic.postInterest();
	Delphox.postInterest();
	Lucario.postInterest();
	Lopunny.postInterest();
	std::cout << "***********************************" << std::endl;
	Meowstic.print();
	Delphox.print();
	Lucario.print();
	Lopunny.print();
	std::cout << "***********************************" << std::endl;
	Meowstic.writeCheck(250);
	Delphox.writeCheck(350);
	Lucario.withdraw(120);
	Lopunny.withdraw(290);
	std::cout << "********After withdrawals ***************" << std::endl;
	Meowstic.print();
	Delphox.print();
	Lucario.print();
	Lopunny.print();
	std::cout << "***********************************" << std::endl;
	return 0;
}