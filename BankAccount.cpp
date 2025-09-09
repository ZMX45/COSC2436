// Including the BankAccount class created in BankAccount.h
#include "BankAccount.h"

// Constructor for creating bank account including name checking and savings balance
BankAccount::BankAccount(string newName, double chBalance, double sBalance) {
    name = newName;
    checkingBalance = chBalance;
    savingsBalance = sBalance;
}

// Setters and Getters

// Sets name of account owner
void BankAccount::SetName(string newName) {
    name = newName;
}

// Gets name of account owner
string BankAccount::GetName() {
    return name;
}

// Sets amount in checking account
void BankAccount::SetChecking(double balance) {
    checkingBalance = balance;
}

// Gets amount in checking account
double BankAccount::GetChecking() {
    return checkingBalance;
}

// Sets the amount in savings account
void BankAccount::SetSavings(double balance) {
    savingsBalance = balance;
}

// Gets the amount in savings account
double BankAccount::GetSavings() {
    return savingsBalance;
}

// Deposits amount into checking account only if amount entered is greater than 0
void BankAccount::DepositChecking(double amt) {
    if (amt > 0) {
        checkingBalance += amt;
    }
}

// Deposits amount into savings account only if amount entered is greater than 0
void BankAccount::DepositSavings(double amt) {
    if (amt > 0) {
        savingsBalance += amt;
    }
}

// Withdrawals from checking account only if amount entered is less than the amount in checking account
void BankAccount::WithdrawChecking(double amt) {
    if (amt > 0 && amt <= checkingBalance) {
        checkingBalance -= amt;
    }
}

// Withdrawls from savings account only if amount entered is less than the amount in savings account
void BankAccount::WithdrawSavings(double amt) {
    if (amt > 0 && amt <= savingsBalance) {
        savingsBalance -= amt;
    }
}

// Transfers amount from checking into savings only is amount transferred is less than amount in checking account
void BankAccount::TransferToSavings(double amt) {
    if (amt > 0 && amt <= checkingBalance) {
        checkingBalance -= amt;
        savingsBalance += amt;
    }
}