#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
//idk why this works but it does ^^^
#include <iostream>
#include <string>
//Yup make the classes here
class BankAccount 
{
    protected:
        std::string name;
        int accountNumber;
        std::string type;
        double balance;
        double interestRate;

    public:
        BankAccount(std::string name, int accountNumber, std::string type, double balance, double interestRate);
        BankAccount(int accountNumber, double balance);
        //
        std::string getAccountHolderName() const;
        int getAccountNumber() const;
        std::string getAccountType() const;
        double getBalance() const;
        double getInterestRate() const;
        void deposit(double add);
        void withdraw(double subtract);
        double calculateInterest();
        void updateBalance();
        void print();
};
//idk why this works but it does vvv 
#endif