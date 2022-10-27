#include <iostream>

using uint = unsigned int;

bool checkAreValidTriangleSides(uint first, uint second, uint third);

void printTriangleTypeBySides(uint first, uint second, uint third);

int main()
{
    printTriangleTypeBySides(4, 4, 5);

    return 0;
}

bool checkAreValidTriangleSides(uint first, uint second, uint third)
{
    return (first + second > third) &&
        (first + third > second) &&
        (second + third > first);
}

void printTriangleTypeBySides(uint first, uint second, uint third)
{
    if (!checkAreValidTriangleSides(first, second, third))
    {
        std::cout << "Not a valid triangle.\n";
        return;
    }

    if (first == second && second == third)
    {
        std::cout << "Equilateral.\n";
    }
    else if (first == second || first == third || second == third)
    {
        std::cout << "Isosceles.\n";
    }
    else
    {
        std::cout << "Versatile.\n";
    }
}