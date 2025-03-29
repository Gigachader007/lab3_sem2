#pragma once

#include <iostream>


class Car{
protected:
    std::string modelName;
    float maxSpeed;
public:
    Car(const std::string& modelName, const float maxSpeed) : modelName(modelName), maxSpeed(maxSpeed) {}
    
    virtual void print(){ //as a example for this task
        std::cout << "Model Name: '" << modelName << "' Max Speed: '" << maxSpeed << "'";
    }
};