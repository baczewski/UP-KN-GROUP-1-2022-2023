#include <iostream>

const int circleRadius = 2;
const int circleCenterX = 0;
const int circleCenterY = 0;

int main()
{
    double x, y;

    std::cout << "Input coordinate x of the point: ";
    std::cin >> x;

    std::cout << "Input coordinate y of the point: ";
    std::cin >> y;

    bool liesInCircle = (x - circleCenterX) * (x - circleCenterX)
        + (y - circleCenterY) * (y - circleCenterY) 
        <= circleRadius * circleRadius;
    
    bool liesInCircleAndNotInItsRightPart = liesInCircle && x <= 1;

    std::cout << std::boolalpha << liesInCircleAndNotInItsRightPart << "\n";

    return 0;
}