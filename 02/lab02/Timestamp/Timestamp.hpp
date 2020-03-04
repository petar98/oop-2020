#ifndef TIMESTAMP_HPP
#define TIMESTAMP_HPP

class Timestamp
{
public:
    void convert(const unsigned);
    void print() const;
    void add(const Timestamp&);
    unsigned convertToSeconds() const;
private:
    unsigned hours;
    unsigned minutes;
    unsigned seconds;

    void helperMethod();
};

#endif // TIMESTAMP_HPP