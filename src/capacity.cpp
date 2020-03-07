//Each airline has a different percentage of high class seats.
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

int aClass(int capacity, int airChoice)
{
    switch (airChoice)
    {
        case 1:
            return capacity * .1;
        case 2:
            return capacity * .125;
        case 3:
            return capacity * .075;
        case 4:
            return capacity * .15;
    }
}

int sClass(int capacity, int airChoice)
{
    switch(airChoice)
    {
        case 1:
            return capacity * .03;
        case 2:
            return capacity * .05;
        case 3:
            return capacity * .02;
        case 4:
            return capacity * .04;
    }
}

int main()
{
    int capacity;
    int airChoice;
    std::string airlines[] = {"Southwest Airlines", "Frontier Airlines", "American Airlines", "Delta Airlines"};

    while(true)
    {
        std::cout << "Tristan's seat calculator\nPlease choose an airline." << 
        "\n1\tSouthwest" <<
        "\n2\tFrontier" << 
        "\n3\tAmerican" <<
        "\n4\tDelta" <<
        "\n5\tExit Program" << std::endl;
        std::cin >> airChoice;

        if(airChoice > 0 && airChoice < 5)
        {
            std::cout << "Enter the number of seats: ";
            std::cin >> capacity;
            std::cout << std::endl;

            std::cout << airlines[airChoice-1] <<
            "\nTotal # of seats: " << capacity <<
            "\n# of A-Class seats: " << aClass(capacity, airChoice) <<
            "\n# of S-Class seats: " << sClass(capacity, airChoice) << "\n\n";
        }
        else if(airChoice == 5)
            break;
        else
            std::cout << "Invalid selection.";
    }

    return 0;
}