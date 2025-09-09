#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
using namespace std;

/* Class for customer's bank account including their name and balance for checking and savings
* includes methods for depositing, withdrawing, and transferring
*/
class BankAccount {
private:
    string name;    // name for bank account
    double checkingBalance;    //  amount in checking account   
    double savingsBalance;    // amount in savings account

public:
    // Constructor creating bank account with customer name checking balance and savings balance
    BankAccount(string newName, double chBalance, double sBalance);

    // Setter and getter for account holder name
    void SetName(string newName);
    string GetName();

    // Setter and Getter for checking account
    void SetChecking(double balance);
    double GetChecking();

    // Setter and Getter for savings account
    void SetSavings(double balance);
    double GetSavings();

    // Methods for depositing funds
    void DepositChecking(double amt);
    void DepositSavings(double amt);

    // Methods for withdrawing funds
    void WithdrawChecking(double amt);
    void WithdrawSavings(double amt);

    // Method for transferring checking balance to savings
    void TransferToSavings(double amt);
};

#endif
