// Checkings.h
#pragma once
#include "BankAccount.h"

class Checkings : public BankAccount 
{
    private:
        double interestRate;
        double minimumBalance;
        double serviceCharge;

    public:
        Checkings(int accountNumber, double balance, double minBalance = 0.0, double rate = 0.0, double charge = 0.0);
        // 
        double getMinimumBalance();
        void setMinimumBalance(double minBalance);
        double getInterestRate();
        void setInterestRate(double rate);
        double getServiceCharge();
        void setServiceCharge(double charge);
        //
        void postInterest();
        void writeCheck(double amount);
        void withdraw(double amount);
        void print();
};
