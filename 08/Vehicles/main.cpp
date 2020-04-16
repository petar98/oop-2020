#include "Vehicle.hpp"
#include "Car.hpp"

int main()
{
    // Vehicle v("Ford Focus", "CA1234AS", 23.6);
    // v.print();

    Car c("Ford Focus", "CA1234AS", 23.6, 5);
    Car z;

    z = c;
    z.print();

    return 0;
}