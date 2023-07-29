#include "BankAccount.h"
#define SAVINGS_H
//Yup make the classes here
//atleast it feels more organized.
class Savings : public BankAccount 
{
    private:
        double interestRate;

    public:
        Savings(int accountNumber, double balance, double rate);
        Savings(int accountNumber, double balance);
        //
        double getInterestRate();
        void setInterestRate(double rate);
        void postInterest();
        void withdraw(double amount);
        void print();
}; 