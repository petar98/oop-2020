#include "Complex.hpp"

int main()
{
    Complex z;
    z.createComplex(3 ,4);

    Complex z1;
    z1.createComplex(-6 ,-9);

    // z.add(z1);
    z.product(z1);
    z.print();
    return 0;
}