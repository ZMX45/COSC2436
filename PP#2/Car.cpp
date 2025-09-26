#include "Car.h"
#include <iostream>
using namespace std;

// Defining functions of Car
Car::Car()
    : Vehicle(), spareInTrunk(false), rearWindshieldWiper(false) {}

Car::Car(string make, string model, string color, int mpg, double msrp,
         bool spare, bool wiper)
    : Vehicle(make, model, color, mpg, msrp),
      spareInTrunk(spare), rearWindshieldWiper(wiper) {}

void Car::SetSpareInTrunk(bool value) {
     spareInTrunk = value; }

void Car::SetRearWindshieldWiper(bool value) {
     rearWindshieldWiper = value; }

bool Car::HasSpareInTrunk() const {
     return spareInTrunk; }

bool Car::HasRearWindshieldWiper() const {
     return rearWindshieldWiper; }

// Overriding original print function to include new attributes
void Car::PrintInfo() const {
    Vehicle::PrintInfo();
    cout << "Spare in trunk: " << (spareInTrunk ? "Yes" : "No") << endl;
    cout << "Rear windshield wiper: " << (rearWindshieldWiper ? "Yes" : "No") << endl;
}
