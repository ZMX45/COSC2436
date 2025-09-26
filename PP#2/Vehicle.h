#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>
using namespace std;

class Vehicle {
private:
    string make;
    string model;
    string color;
    int mpg;
    double msrp;

public:
    // Constructors
    Vehicle();
    Vehicle(string make, string model, string color, int mpg, double msrp);

    // Setters
    void SetMake(string make);
    void SetModel(string model);
    void SetColor(string color);
    void SetMpg(int mpg);
    void SetMsrp(double msrp);

    // Getters
    string GetMake() const;
    string GetModel() const;
    string GetColor() const;
    int GetMpg() const;
    double GetMsrp() const;

    // Virtual function for printing (to be overridden by derived classes)
    virtual void PrintInfo() const;
    virtual ~Vehicle() {}
};

#endif
