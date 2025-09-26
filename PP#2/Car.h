#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

// Creating Car class derived from Vehicle class
class Car : public Vehicle {
    // Attributes exclusive to car objects
    private:
        bool spareInTrunk;
        bool rearWindshieldWiper;

// Car constructor
public:
    Car();
    Car(string make, string model, string color, int mpg, double msrp,
        bool spareInTrunk, bool rearWindshieldWiper);

    // Setters for Car class
    void SetSpareInTrunk(bool value);

    void SetRearWindshieldWiper(bool value);

    // Getters for Car class
    bool HasSpareInTrunk() const;
    
    bool HasRearWindshieldWiper() const;

//  Function to print out description of Car object overriding the original print function
    void PrintInfo() const override;
};

#endif
