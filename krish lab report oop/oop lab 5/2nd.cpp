#include <iostream> 
using namepsace std ; 

class Vehicle {
public:
    virtual void start() = 0; // Pure virtual function
};

class Car : public Vehicle {
public:
    void start() override {
        std::cout << "Car started!" << std::endl;
    }
};

class Motorcycle : public Vehicle {
public:
    void start() override {
        std::cout << "Motorcycle started!" << std::endl;
    }
};

int main() {
    Car car;
    Motorcycle motorcycle;

    car.start();
    motorcycle.start();

    return 0;
}