#include <iostream>
#include <stdio.h>
#include <string.h>

// strlen 
// strcpy
// strcmp
// strcat

enum EngineType
{
    PETROL,   // 0
    DIESEL,   // 1
    ELECTRIC  // 2
};

struct Car
{
    char* model;
    double price;
    double kilometersReached;
    double fuelConsumed;
    EngineType engineType;
};

Car createCar(const char* model, double price, double kilometers, double fuel, EngineType type)
{
    Car car;
    car.model = new char[strlen(model) + 1];
    strcpy(car.model, model);
    car.model[strlen(model) + 1] = '\0';

    car.price = price;
    car.kilometersReached = kilometers;
    car.fuelConsumed = fuel;
    car.engineType = type;

    return car;
}

double calculateFuelPer100km(Car& car)
{
    return (car.fuelConsumed / car.kilometersReached)  * 100;
}

int main()
{
    // EngineType type = (EngineType) 1; // == type = DIESEL

    const char* carModel = "Seat Leon";
    Car exampleCar = createCar(carModel, 3000, 22000, 360, DIESEL);

    std::cout << "Model = " << exampleCar.model << std::endl;
    std::cout << "Price = " << exampleCar.price << std::endl;
    std::cout << "Kilometers = " << exampleCar.kilometersReached << std::endl;
    std::cout << "Fuel = " << exampleCar.fuelConsumed << std::endl;
    std::cout << "Engine type = " << exampleCar.engineType << std::endl;

    std::cout << calculateFuelPer100km(exampleCar) << std::endl;

    delete[] exampleCar.model;

    return 0;
}