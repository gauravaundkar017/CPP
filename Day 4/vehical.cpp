/*
Vehicle Inheritance:
Problem Statement: Develop a class hierarchy for vehicles. Start with a base class Vehicle and create derived classes like Car, Motorcycle, and Truck. Each derived class should have unique properties like the number of wheels and specific methods like start_engine().
*/

#include <iostream>

using namespace std;

class Vehicle {
public:
  int num_wheels;

  Vehicle(int num_wheels) : num_wheels(num_wheels) {}

  void start_engine() {
    cout << "The vehicle engine starts." << endl;
  }
};

class Car : public Vehicle {
public:
  Car() : Vehicle(4) {}
};

class Motorcycle : public Vehicle {
public:
  Motorcycle() : Vehicle(2) {}
};

class Truck : public Vehicle {
public:
  Truck() : Vehicle(6) {}
};

int main() {
  Car car;
  Motorcycle motorcycle;
  Truck truck;

  car.start_engine();
  motorcycle.start_engine();
  truck.start_engine();

  return 0;
}