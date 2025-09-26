// Including the .h file to define the functions
#include "Vehicle.h"

// Default constructor
Vehicle::Vehicle()
    : make("Unknown"), model("Unknown"), color("Unpainted"), mpg(0), msrp(0.0) {}

// Parameterized constructor
Vehicle::Vehicle(string mk, string mdl, string clr, int mpgVal, double price)
    : make(mk), model(mdl), color(clr), mpg(mpgVal), msrp(price) {}

// Setters for vehicle
void Vehicle::SetMake(string mk) {
     make = mk; }

void Vehicle::SetModel(string mdl) {
     model = mdl; }

void Vehicle::SetColor(string clr) {
     color = clr; }

void Vehicle::SetMpg(int mpgVal) {
     mpg = mpgVal; }

void Vehicle::SetMsrp(double price) {
     msrp = price; }


// Getters for vehicle
string Vehicle::GetMake() const {
     return make; }

string Vehicle::GetModel() const {
     return model; }

string Vehicle::GetColor() const {
     return color; }

int Vehicle::GetMpg() const {
     return mpg; }
     
double Vehicle::GetMsrp() const {
     return msrp; }


// Print the details of vehicle object
void Vehicle::PrintInfo() const {
    cout << "Make: " << make << "\nModel: " << model
         << "\nColor: " << color << "\nMPG: " << mpg
         << "\nMSRP: $" << msrp << endl;
}
