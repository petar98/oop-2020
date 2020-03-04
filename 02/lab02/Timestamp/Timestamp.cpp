#include "Timestamp.hpp"
#include <iostream>

void Timestamp::convert(const unsigned seconds)
{
    //hours
    //minutes
    //seconds

    const unsigned SECONDS_IN_HOUR = 3600;
    this->hours = seconds / SECONDS_IN_HOUR;

    unsigned reducedSeconds = seconds % SECONDS_IN_HOUR;
    const unsigned SECONDS_IN_MINUTE = 60;
    this->minutes = reducedSeconds / SECONDS_IN_MINUTE;

    reducedSeconds %= SECONDS_IN_MINUTE;
    this->seconds = reducedSeconds;
}

void Timestamp::print() const
{
    // HH:MM:SS
    std::cout << hours << ":" << minutes << ":" << seconds << std::endl;
}

void Timestamp::add(const Timestamp& other)
{
    // hours + other's hours
    this->hours = this->hours + other.hours;
    this->minutes += other.minutes;
    this->seconds += other.seconds;
}

unsigned Timestamp::convertToSeconds() const
{
    unsigned seconds = 0;
    const unsigned SECONDS_IN_HOUR = 3600;
    seconds += this->hours * SECONDS_IN_HOUR;

    const unsigned SECONDS_IN_MINUTE = 60;
    seconds += this->minutes * SECONDS_IN_MINUTE;

    seconds += this->seconds;

    return seconds;
}