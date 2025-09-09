#include <iostream>
// Including the BankAccount class
#include "BankAccount.h"
using namespace std;

int main() {
    // Creating a bank account with a name, checking amount, and savings amount
    
    BankAccount account("Alice Smith", 500.00, 1000.00);

    // variables for user choice in UI
    int choice;
    double amount;


    cout << " Welcome, " << account.GetName() << "!" << endl;

    // Menu loop (repeats until user chooses Exit)
    do {
        // Display menu options
        cout << "\n--- Bank Account Menu ---" << endl;
        cout << "1. Deposit into Checking" << endl;
        cout << "2. Deposit into Savings" << endl;
        cout << "3. Withdraw from Checking" << endl;
        cout << "4. Withdraw from Savings" << endl;
        cout << "5. Transfer from Checking to Savings" << endl;
        cout << "6. Show Balances" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        // Choice to deposit money in checking account
        switch (choice) {
            case 1:
                cout << "Enter amount to deposit into Checking: $";
                cin >> amount;
                account.DepositChecking(amount);
                break;

            // Choice to deposit money in savings account
            case 2:
                cout << "Enter amount to deposit into Savings: $";
                cin >> amount;
                account.DepositSavings(amount);
                break;
            
            // Choice to withdraw money from checking account
            case 3:
                cout << "Enter amount to withdraw from Checking: $";
                cin >> amount;
                account.WithdrawChecking(amount);
                break;

            // Choice to withdraw money from savings account
            case 4:
                cout << "Enter amount to withdraw from Savings: $";
                cin >> amount;
                account.WithdrawSavings(amount);
                break;

            // Choice to transfer money from checking account into savings account
            case 5:
                cout << "Enter amount to transfer from Checking to Savings: $";
                cin >> amount;
                account.TransferToSavings(amount);
                break;

            // Choice to view balance of checking and savings account
            case 6:
                cout << "\n--- Account Balances ---" << endl;
                cout << "Customer: " << account.GetName() << endl;
                cout << "Checking Balance: $" << account.GetChecking() << endl;
                cout << "Savings Balance:  $" << account.GetSavings() << endl;
                break;

            // Choice to exit program
            case 7:
                cout << "Exiting program. Goodbye!" << endl;
                break;

            // Choice that takes invalid responses and gives error
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
        }
    } while (choice != 7);  // Looping until users chooses exit option

    return 0;
}