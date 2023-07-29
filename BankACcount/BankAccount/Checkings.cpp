// Checkings.cpp
#include "Checkings.h"
#include <iostream>

Checkings::Checkings(int accountNumber, double balance, double minBalance, double rate, double charge)
    : BankAccount(accountNumber, balance), minimumBalance(minBalance), interestRate(rate), serviceCharge(charge)
{
}

double Checkings::getMinimumBalance() 
{
    return minimumBalance;
}

void Checkings::setMinimumBalance(double minBalance) 
{
    minimumBalance = minBalance;
}

double Checkings::getInterestRate() 
{
    return interestRate;
}

void Checkings::setInterestRate(double rate) 
{
    interestRate = rate;
}

double Checkings::getServiceCharge() 
{
    return serviceCharge;
}

void Checkings::setServiceCharge(double charge) 
{
    serviceCharge = charge;
}

void Checkings::postInterest() 
{
    balance += balance * interestRate;
}

void Checkings::writeCheck(double amount) 
{
    this->withdraw(amount);
}

void Checkings::withdraw(double amount) 
{
    //to remove 999 if statements just added returns
    if (amount >= balance) 
    {
        std::cout << "Error: Insufficient balance to withdraw.\n";
        return;
    }
    if (balance - amount < minimumBalance && balance - amount - serviceCharge < 0) 
    {
        std::cout << "Error: Insufficient balance to Service Charge.\n";
        return;
    }
    balance -= (amount + serviceCharge);
}

void Checkings::print() 
{
    BankAccount::print();
    std::cout << "Minimum Balance: " << minimumBalance << "\n";
    std::cout << "Interest Rate: " << interestRate << "\n";
    std::cout << "Service Charge: " << serviceCharge << "\n";
}
