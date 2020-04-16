#include <iostream>
#include "Person.hpp"

void f(Person& p)
{
    p.print();
}

int main()
{
    Person p("Ivan", "Ivanov", 19, "Sofia");
    // p.print();

    Teacher t("Ivan", "Ivanov", 19, "Sofia", 12, 3000, 23);
    // t.print();

    Person pesho = t;
    f(t);
    f(pesho);

    return 0;
}