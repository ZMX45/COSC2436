#ifndef TRUCK_H
#define TRUCK_H

// Including vehicle to derive from
#include "Vehicle.h"

//Deriving truck class from vehicle
class Truck : public Vehicle {

// New attributes unique to truck objects
private:
    bool sidePanelStorage;
    bool autoReleaseTailgate;

//Contructos for truck class
public:
    Truck();
    Truck(string make, string model, string color, int mpg, double msrp,
          bool sidePanelStorage, bool autoReleaseTailgate);

    // Setters for truck class
    void SetSidePanelStorage(bool value);

    void SetAutoReleaseTailgate(bool value);

    // Getters for truck class
    bool HasSidePanelStorage() const;
    
    bool HasAutoReleaseTailgate() const;

    //Print description of truck overriding original print function
    void PrintInfo() const override;
};

#endif
