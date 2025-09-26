// Including the Truck and Car classes into main
#include <iostream>
#include <vector>
#include <memory>
#include "Car.h"
#include "Truck.h"
using namespace std;

// Function to create ui menu to navigate the program
void PrintMenu() {
    cout << "\nCar Dealership Inventory System\n";
    cout << "1. Add Car\n";
    cout << "2. Add Truck\n";
    cout << "3. Print All Inventory\n";
    cout << "4. Search by Make/Model/Color\n";
    cout << "5. Print Details of Specific Vehicle\n";
    cout << "0. Exit\n";
    cout << "Enter choice: ";
}

int main() {
    // Vector to store cars and trucks
    vector<shared_ptr<Vehicle>> inventory;
    int choice;

    do {
        PrintMenu();
        // Taking user input for choice on menu
        cin >> choice;
        cin.ignore();

        // Creating a new car
        if (choice == 1) {
            string make, model, color;
            int mpg;
            double msrp;
            bool spare, wiper;

            cout << "Enter make: "; getline(cin, make);
            cout << "Enter model: "; getline(cin, model);
            cout << "Enter color: "; getline(cin, color);
            cout << "Enter MPG: "; cin >> mpg;
            cout << "Enter MSRP: "; cin >> msrp;
            cout << "Spare in trunk (1=yes, 0=no): "; cin >> spare;
            cout << "Rear windshield wiper (1=yes, 0=no): "; cin >> wiper;

            inventory.push_back(make_shared<Car>(make, model, color, mpg, msrp, spare, wiper));
            cout << "Car added!\n";
        }
        // Creating a new truck
        else if (choice == 2) {
            string make, model, color;
            int mpg;
            double msrp;
            bool storage, tailgate;

            cout << "Enter make: "; getline(cin, make);
            cout << "Enter model: "; getline(cin, model);
            cout << "Enter color: "; getline(cin, color);
            cout << "Enter MPG: "; cin >> mpg;
            cout << "Enter MSRP: "; cin >> msrp;
            cout << "Side panel storage (1=yes, 0=no): "; cin >> storage;
            cout << "Auto-release tailgate (1=yes, 0=no): "; cin >> tailgate;

            inventory.push_back(make_shared<Truck>(make, model, color, mpg, msrp, storage, tailgate));
            cout << "Truck added!\n";
        }
        // Print all cars and trucks in inventory
        else if (choice == 3) {
            cout << "\nCurrent Inventory:\n";
            for (size_t i = 0; i < inventory.size(); ++i) {
                cout << "[" << i << "] ";
                inventory[i]->PrintInfo();
                cout << "-----------------------\n";
            }
        }
        // Search inventory by attribute
        else if (choice == 4) {
            string search;
            cout << "Enter make, model, or color to search: ";
            getline(cin, search);

            for (auto &v : inventory) {
                if (v->GetMake() == search || v->GetModel() == search || v->GetColor() == search) {
                    v->PrintInfo();
                    cout << "-----------------------\n";
                }
            }
        }
        // Print description of specific vehicle
        else if (choice == 5) {
            int idx;
            cout << "Enter index of vehicle: ";
            cin >> idx;

            // Error message for invalid inputs from user
            if (idx >= 0 && idx < (int)inventory.size()) {
                inventory[idx]->PrintInfo();
            } else {
                cout << "Invalid index.\n";
            }
        }

    } while (choice != 0);
    // Loop program until user chooses to exit

    return 0;
}
