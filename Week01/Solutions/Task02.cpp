#include <iostream>

int main()
{
    int first, second;

    std::cin >> first >> second;

    int counter = 0;

    for (int curr = first; curr <= second; ++curr)
    {
        int sum = 0, product = 1;

        int currCopy = curr;

        while (currCopy > 0)
        {
            int lastDigit = currCopy % 10;

            sum = sum + lastDigit;
            product = product * lastDigit;

            currCopy = currCopy / 10;
        }

        if (sum == product)
        {
            ++counter;
        }
    }

    std::cout << counter << std::endl;

    return 0;
}