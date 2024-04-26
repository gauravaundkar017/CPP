#include <iostream>
#include <string>

// Base class Vehicle
class Vehicle {
protected:
    std::string name;

public:
    Vehicle(const std::string& name) : name(name) {}
    
    virtual ~Vehicle() {}

    virtual void start_engine() const = 0; // Abstract method

    virtual void display_info() const {
        std::cout << "Vehicle Type: " << name << std::endl;
    }
};

// Derived class Car
class Car : public Vehicle {
private:
    int num_wheels;

public:
    Car(const std::string& name, int num_wheels) : Vehicle(name), num_wheels(num_wheels) {}

    void start_engine() const override {
        std::cout << "Starting car engine." << std::endl;
    }

    void display_info() const override {
        std::cout << "Car Type: " << name << std::endl;
        std::cout << "Number of Wheels: " << num_wheels << std::endl;
    }
};

// Derived class Motorcycle
class Motorcycle : public Vehicle {
private:
    int num_wheels;

public:
    Motorcycle(const std::string& name, int num_wheels) : Vehicle(name), num_wheels(num_wheels) {}

    void start_engine() const override {
        std::cout << "Starting motorcycle engine." << std::endl;
    }

    void display_info() const override {
        std::cout << "Motorcycle Type: " << name << std::endl;
        std::cout << "Number of Wheels: " << num_wheels << std::endl;
    }
};

// Derived class Truck
class Truck : public Vehicle {
private:
    int num_wheels;

public:
    Truck(const std::string& name, int num_wheels) : Vehicle(name), num_wheels(num_wheels) {}

    void start_engine() const override {
        std::cout << "Starting truck engine." << std::endl;
    }

    void display_info() const override {
        std::cout << "Truck Type: " << name << std::endl;
        std::cout << "Number of Wheels: " << num_wheels << std::endl;
    }
};

int main() {
    Car car("Sedan", 4);
    Motorcycle motorcycle("Sport Bike", 2);
    Truck truck("Pickup", 6);

    car.display_info();
    car.start_engine();

    motorcycle.display_info();
    motorcycle.start_engine();

    truck.display_info();
    truck.start_engine();

    return 0;
}
