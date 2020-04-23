#include <iostream>
#include <fstream>
#include "Vector.hpp"

int main()
{

    // Vector<int> v;
    // std::cin >> v;
    // std::cout << v;
    // std::cin >> v;

    // std::ofstream myFile;
    // myFile.open("testing-file.txt", std::ios::out | std::ios::trunc);
    // if (myFile.is_open())
    // {
    //     myFile << "Hello from the other side. \n";
    //     myFile << v;
    //     myFile.close();
    // }   


    Vector<char> myString;
    char temp = '\0';
    while (std::cin.get(temp) && temp != '\n')
    {
        myString.pushBack(temp);
    }

    myString.printVector();

    // std::ifstream otherFile;
    // otherFile.open("testing-file.txt", std::ios::in);
    // if (otherFile.is_open())
    // {
    //     char input = '\0';
    //     while (otherFile.get(input))
    //     {
    //         std::cout << input;
    //     }
    //     otherFile.eof();
    //     otherFile.close();
    // }

    return 0;
}