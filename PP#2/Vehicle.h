#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>
using namespace std;

// Creating the base class vehicle which will be derived from
class Vehicle {

// The attributes of vehicle
private:
    string make;
    string model;
    string color;
    int mpg;
    double msrp;

public:
    // Constructors for vehicle
    Vehicle();
    Vehicle(string make, string model, string color, int mpg, double msrp);

    // Setters for vehicle class
    void SetMake(string make);
    void SetModel(string model);
    void SetColor(string color);
    void SetMpg(int mpg);
    void SetMsrp(double msrp);

    // Getters for vehicle class
    string GetMake() const;
    string GetModel() const;
    string GetColor() const;
    int GetMpg() const;
    double GetMsrp() const;

    // Print fuction made virtual so it can be overriden
    virtual void PrintInfo() const;
    virtual ~Vehicle() {}
};

#endif
