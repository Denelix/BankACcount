#include "Savings.h"
//Apperently, dont make the classes here : )  
Savings::Savings(int accountNumber, double balance) 
    : BankAccount(accountNumber, balance)
{
    interestRate = 0.02;
}

double Savings::getInterestRate() 
{
    return interestRate;
}

void Savings::setInterestRate(double rate) 
{
    interestRate = rate;
}

void Savings::postInterest() 
{
    balance += balance * interestRate;
}

void Savings::withdraw(double amount) 
{
    if (balance >= amount)
        balance -= amount;
    else
        std::cout << "Error: Insufficient balance to withdrawal.\n";
}

void Savings::print() 
{
    BankAccount::print();
    std::cout << "Interest Rate: " << interestRate << "\n";
}
