#include <iostream>

// Използваме наивен алгоритъм, като не винаги
// ще получаваме като резултат най-добрия вариант

int main()
{
    unsigned int begin, end;

    std::cout << "Input begin: ";
    std::cin >> begin;

    std::cout << "Input end: ";
    std::cin >> end;

    for (int curr = begin; curr <= end; ++curr)
    {
        int current = curr;

        while (current != 0)
        {
            int decrease = current >= 20 ? 20
                : current >= 12 ? 12
                : current >= 8 ? 8
                : current >= 6 ? 6
                : current >= 4 ? 4 : 1;

            switch (decrease)
            {
                case 1: std::cout << "Plasma"; break;
                case 4: std::cout << "Fire"; break;
                case 6: std::cout << "Earth"; break;
                case 8: std::cout << "Air"; break;
                case 12: std::cout << "Universe"; break;
                case 20: std::cout << "Water"; break;
                default: std::cout << "Invalid decrease\n";
            }

            current = current - decrease;
        }

        std::cout << std::endl;
    }

    return 0;
}