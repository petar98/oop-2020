#ifndef PERSON_HPP
#define PERSON_HPP

#include <cstring>
#include <iostream>

class Person
{
public:
    Person();
    Person(const Person&);
    Person(const char* first, const char* last, const unsigned age, const char* address)
        : firstName(new char [strlen(first) + 1])
        , lastName(new char [strlen(last) + 1])
        , age(age)
        , address(new char [strlen(address) + 1])
    {
        strncpy(this->firstName, first, strlen(first));
        strncpy(this->lastName, last, strlen(last));
        strncpy(this->address, address, strlen(address));

        this->firstName[strlen(this->firstName)] = '\0';
        this->lastName[strlen(this->lastName)] = '\0';
        this->address[strlen(this->address)] = '\0';

        this->age = age;
    }
    Person& operator=(const Person&);
    ~Person();

    void print() const;
private:
    char* firstName;
    char* lastName;
    unsigned age;
    char* address;

    void copyFrom(const Person&);
    void deallocate();
};

Person::Person()
    : firstName(new char [10])
    , lastName(new char [10])
    , age(0)
    , address(new char [10])
{
    strncpy(this->firstName, "Default", strlen("Default"));
    strncpy(this->lastName, "Default", strlen("Default"));
    strncpy(this->address, "Default", strlen("Default"));

    this->firstName[strlen(this->firstName)] = '\0';
    this->lastName[strlen(this->firstName)] = '\0';
    this->address[strlen(this->firstName)] = '\0';
}

void Person::copyFrom(const Person& other)
{
    this->firstName = new char [strlen(other.firstName) + 1];
    this->lastName = new char [strlen(other.lastName) + 1];
    this->address = new char [strlen(other.address) + 1];

    strncpy(this->firstName, other.firstName, strlen(other.firstName));
    strncpy(this->lastName, other.lastName, strlen(other.lastName));
    strncpy(this->address, other.address, strlen(other.address));

    this->firstName[strlen(this->firstName)] = '\0';
    this->lastName[strlen(this->lastName)] = '\0';
    this->address[strlen(this->address)] = '\0';

    this->age = other.age;
}

void Person::deallocate()
{
    delete[] this->firstName;
    delete[] this->lastName;
    delete[] this->address;
}

Person::Person(const Person& other)
{
    copyFrom(other);
}

Person& Person::operator=(const Person& other)
{
    if (this != &other)
    {
        deallocate();
        copyFrom(other);
    }
    return *this;
}

Person::~Person()
{
    deallocate();
}

void Person::print() const
{
    std::cout << this->firstName << " " << this->lastName << std::endl;
    std::cout << this->age << std::endl;
    std::cout << this->address << std::endl;
}

class Teacher : public Person
{
public:
    Teacher(const char* first, 
            const char* last, 
            const unsigned age, 
            const char* address,
            const unsigned experience,
            const double salary,
            const unsigned courses)
        : Person(first, last, age, address)
        , experience(experience)
        , salary(salary)
        , courses(courses)
    {
    }

    void print() const
    {
        Person::print();
        std::cout << this->experience << std::endl;
        std::cout << this->salary << std::endl;
        std::cout << this->courses << std::endl;
    }
private:
    unsigned experience;
    double salary;
    unsigned courses;
};

#endif // PERSON_HPP