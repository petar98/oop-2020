#include "Timestamp.hpp"
#include <iostream>

int main()
{
    Timestamp timestamp;
    timestamp.convert(3661);

    Timestamp timestamp2;
    timestamp2.convert(24);

    timestamp.add(timestamp2);
    timestamp.print();

    //std::cout << timestamp.convertToSeconds() << std::endl;
    return 0;
}