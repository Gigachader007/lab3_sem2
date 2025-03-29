#pragma once

#include "Car.hpp"

class Bus : public Car {
    unsigned int maxPassangersCount;
public:
    Bus(const std::string& modelName, const float maxSpeed, unsigned int maxPassangersCount) : 
                        Car(modelName, maxSpeed), 
                        maxPassangersCount(maxPassangersCount) {}
    void print() override {
        Car::print();
        std::cout << " Max Passangers Count: '" << maxPassangersCount << "'";
    }
};