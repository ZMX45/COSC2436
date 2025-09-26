#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    bool spareInTrunk;
    bool rearWindshieldWiper;

public:
    Car();
    Car(string make, string model, string color, int mpg, double msrp,
        bool spareInTrunk, bool rearWindshieldWiper);

    // Setters
    void SetSpareInTrunk(bool value);

    void SetRearWindshieldWiper(bool value);

    // Getters
    bool HasSpareInTrunk() const;
    
    bool HasRearWindshieldWiper() const;

    void PrintInfo() const override;
};

#endif
