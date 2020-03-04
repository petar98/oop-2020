#include "Complex.hpp"
#include <iostream>

void Complex::createComplex(const double real, const double imaginary)
{
    this->real = real;
    this->imaginary = imaginary;
}

void Complex::add(const Complex& other)
{
    this->real += other.real;
    this->imaginary += other.imaginary;
}

void Complex::product(const Complex& other)
{
    const double oldReal = this->real;
    this->real = this->real * other.real - this->imaginary * other.imaginary;
    this->imaginary = oldReal * other.imaginary + this->imaginary * other.real;
}

void Complex::print() const
{
    std::cout << real;
    if (imaginary < 0)
    {
        std::cout << " - " << -imaginary << "i" << std::endl;
    }
    else
    {
        std::cout << " + " << imaginary << "i" << std::endl;
    }
}