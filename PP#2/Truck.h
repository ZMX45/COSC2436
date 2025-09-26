#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
private:
    bool sidePanelStorage;
    bool autoReleaseTailgate;

public:
    Truck();
    Truck(string make, string model, string color, int mpg, double msrp,
          bool sidePanelStorage, bool autoReleaseTailgate);

    // Setters
    void SetSidePanelStorage(bool value);

    void SetAutoReleaseTailgate(bool value);

    // Getters
    bool HasSidePanelStorage() const;
    
    bool HasAutoReleaseTailgate() const;

    void PrintInfo() const override;
};

#endif
