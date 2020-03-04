#ifndef DISPENCER_HPP
#define DISPENCER_HPP

class Dispencer
{
public:
    void fill(const double);
    void fillGlass(const double);
    void fillBottle(const double);
private:
    double litres;
};

#endif