#ifndef COMPLEX_HPP
#define COMPLEX_HPP

class Complex
{
public:
    void createComplex(const double, const double);
    void add(const Complex&);
    void product(const Complex&);
    void print() const;
private:
    double real;
    double imaginary;
};

#endif