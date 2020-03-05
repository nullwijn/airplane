//10% of the seats will be reserved for A-class
//3% of the seats will be reserved for S-class
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

int aClass(int capacity)
{
    return capacity * .1;
}

int sClass(int capacity)
{
    return capacity * .03;
}

int main()
{
    int capacity;

    std::cout << "Enter the number of seats: ";
    std::cin >> capacity;
    std::cout << std::endl;

    std::cout << "# of A-Class seats: " << aClass(capacity) << " # of S-Class seats: " << sClass(capacity);

    return 0;
}