// Including the .h to define functions
#include "Truck.h"
#include <iostream>
using namespace std;

// Constructors for truck class
Truck::Truck()
    : Vehicle(), sidePanelStorage(false), autoReleaseTailgate(false) {}

Truck::Truck(string make, string model, string color, int mpg, double msrp,
             bool storage, bool tailgate)
    : Vehicle(make, model, color, mpg, msrp),
      sidePanelStorage(storage), autoReleaseTailgate(tailgate) {}

// Setters for truck class
void Truck::SetSidePanelStorage(bool value) {
     sidePanelStorage = value; }

void Truck::SetAutoReleaseTailgate(bool value) {
     autoReleaseTailgate = value; }

// Getters for truck class
bool Truck::HasSidePanelStorage() const {
     return sidePanelStorage; }

bool Truck::HasAutoReleaseTailgate() const {
     return autoReleaseTailgate; }

// Overriding the print function to include new attributes
void Truck::PrintInfo() const {
    Vehicle::PrintInfo();
    cout << "Side panel storage: " << (sidePanelStorage ? "Yes" : "No") << endl;
    cout << "Auto-release tailgate: " << (autoReleaseTailgate ? "Yes" : "No") << endl;
}
