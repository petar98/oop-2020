#include "Pair.hpp"
#include <iostream>

int main()
{
    Pair<int> p(6, 4);
    std::cout << p.getMax() << std::endl;

    Pair<double> pd(3.14, 8.24);
    std::cout << pd.getMax() << std::endl;

    return 0;
}