#include "Dispencer.hpp"
#include <iostream>

void Dispencer::fill(const double litres)
{
    this->litres = litres;
}

void Dispencer::fillGlass(const double mililitres)
{
    const double MILILITRES_IN_LITRE = 1000;
    if (this->litres * MILILITRES_IN_LITRE < mililitres)
    {
        std::cout << "Not enough water. Fill me first." << std::endl;
    }
    this->litres -= mililitres / MILILITRES_IN_LITRE;
}

void Dispencer::fillBottle(const double mililitres)
{
    fillGlass(mililitres);
}