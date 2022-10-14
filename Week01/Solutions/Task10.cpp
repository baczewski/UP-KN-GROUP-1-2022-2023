// Автор: Виолета Кастрева

#include <iostream>
#include <cmath>
 
using namespace std;
 
double triangleArea(int x1, int y1, int x2, int y2, int x3, int y3);
bool isAPointOnALine(int a, int b, int x1, int y1, int x2, int y2);
bool isAPointOnAnyOfTheThreeLines(int a, int b, int x1, int y1, int x2, int y2, int x3, int y3);
bool isInsideATriangle(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y);
bool isInsideACircle(int x, int y, int a, int b, int r);
 
//решението е сложно, тъй като е генерализирано, т.е. ще важи и за други произволни тригълници и окръжности в равнината
//може да бъде използвано за едновременна проверка дали точка попада в няколко триъгълника и окръжности 
//може да се правят различни сечения/обединения на кръгове/триъгълници, за да се проверява дали лежи в/извън тях
//всички координати може да се взимат и от конзолата за това решение
int main()
{
    int a, b;
 
    cin >> a >> b;
    //приела съм че радиусът на окръжността е единица и центърът ѝ лежи на точката(-1, 1), тъй като на чертежа не личи къде е
    if (isInsideACircle(a, b, 1, -1, 1) && isInsideATriangle(a, b, -3, 0, -1, 0, 0, 1)) cout << "yes";
    else cout << "no";
   
    return 0;
}
 
//пресмятане на лицето на триъгълник по дадени координати на трите му точки 
double triangleArea(int x1, int y1, int x2, int y2, int x3, int y3)
{
    return abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}
//проверява дали дадена точка се намира върху права (тъй като контурът на фигурите не трябва да бъде включен) изчислявайки дължините на правите, 
//създадени от точката до другите две точки
//ако сбора от двете разстояния е равен на дългата права, то точката принадлежи на правата
bool isAPointOnALine(int a, int b, int x1, int y1, int x2, int y2)
{
    return ((x1 - a) * (x1 - a) + (y1 - b) * (y1 - b) + (x2 - a) * (x2 - a) + (y2 - b) * (y2 - b)) == (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2); //знам че if-а е гаден :D    
}
 
//функция, обобщаваща трите възможни контура на триъгълника, върху които може да попадне точката
bool isAPointOnAnyOfTheThreeLines(int a, int b, int x1, int y1, int x2, int y2, int x3, int y3) {
    return isAPointOnALine(a, b, x1, y1, x2, y2) || isAPointOnALine(a, b, x2, y2, x3, y3) || isAPointOnALine(a, b, x1, y1, x3, y3);
}
 
//математическата формула за проверка дали точка се съдържа в триъгълник, пресмята лицата на трите триъгълника, създадени от вътрешната точка и два върха на триъгълника
//и проверява дали сбора от тези три лица е равен на този на големия триъгълник
bool isInsideATriangle(int x1, int y1, int x2, int y2, int x3, int y3, int a, int b)
{
    //пресмятаме лицето на големия триъгълник
    double S = triangleArea(x1, y1, x2, y2, x3, y3);
    //пресмятаме лицата на малките триъгълници
    double S1 = triangleArea(a, b, x2, y2, x3, y3);
    double S2 = triangleArea(x1, y1, a, b, x3, y3);
    double S3 = triangleArea(x1, y1, x2, y2, a, b);
    //проверяваме дали сбора на трите малки лица е равен на голямото
    return (S == S1 + S2 + S3 && !isAPointOnAnyOfTheThreeLines(a, b, x1, y1, x2, y2, x3, y3));
}
 
//проверяваме дали точката е в окръжността, като не включваме контура 
bool isInsideACircle(int x, int y, int a, int b, int r)
{
    if ((x - a) * (x - a) + (y - b) * (y - b) < r*r) return true;
    return false;
}