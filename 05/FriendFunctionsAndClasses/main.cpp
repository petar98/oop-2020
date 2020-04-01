#include <iostream>

class Display;    // forward declaration

class Phone
{
private:
    Display d;      // compisition
    int value;
public:
    void showDisplay(Display& d)
    {
        d.heigth = 9;
    }
    unsigned getDisplayWidth(Display& d)
    {
        d.width = 12;
    }
    unsigned getDisplayHeigth(Display& d)
    {
        d.heigth = 12;
    }
};


class Display
{
public:
    Display(const unsigned w, const unsigned h)
        : width(w)
        , heigth(h)
    {
    }
    // friend class Phone;
    friend class Phone;
private:
    unsigned width;
    unsigned heigth;
};

void Phone::showDisplay(Display& d)
{
    std::cout << d.width << " " << d.heigth << std::endl;
}

unsigned Phone::getDisplayWidth(Display& d)
{
    return d.width;
}

unsigned Phone::getDisplayHeigth(Display& d) 
{
    return d.heigth;
}

void showDisplay(Display& d)
{
    std::cout << d.width << " " << d.heigth << std::endl;
}

int main()
{
    Display d(1024, 1900);
    Phone p;
    p.showDisplay(d);
    std::cout << p.getDisplayHeigth(d) << std::endl;
    std::cout << p.getDisplayWidth(d) << std::endl;
    return 0;
}