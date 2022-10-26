#include <iostream>

int main()
{
    unsigned int seconds;

    std::cout << "Input time in seconds: ";
    std::cin >> seconds;

    int minutes = seconds / 60;
    seconds = seconds - (minutes * 60);
    int hours = minutes / 60;
    minutes = minutes - (hours * 60);
    int days = hours / 24;
    hours = hours - (days * 24);

    std::cout << days << " days. "
        << hours << " hours. "
        << minutes << " minutes. "
        << seconds << " seconds.\n";

    return 0;
}