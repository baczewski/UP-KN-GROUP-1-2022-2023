#include <iostream>

int main() 
{
    int number;

    std::cin >> number;

    int largestOnesSeq = 0;
    int onesCounter = 0;

    while (number)
    {
        int lastBit = number % 2;

        onesCounter = lastBit == 1 ? onesCounter + 1 : 0;

        if (onesCounter > largestOnesSeq)
        {
            largestOnesSeq = onesCounter;
        }

        number = number / 2;
    }

    std::cout << largestOnesSeq << std::endl;

    return 0;
}