#include <iostream>

const int ARR_MAX_SIZE = 128;

int main()
{
    unsigned int size;

    std::cout << "Size: ";
    std::cin >> size;

    if (size > 0)
    {
        int arr[ARR_MAX_SIZE];

        for (int i = 0; i < size; ++i)
        {
            std::cin >> arr[i];
        }

        int maxSum = arr[0];

        for (int i = 0; i < size - 1; ++i)
        {
            int currMaxSum = arr[i];

            for (int j = i + 1; j < size; ++j)
            {
                currMaxSum += arr[j];

                if (currMaxSum > maxSum)
                    maxSum = currMaxSum;
            }
        }

        std::cout << "Max sum: " << maxSum << std::endl;
    }
    else
    {
        std::cout << "Invalid size.\n";
    }

    return 0;
}