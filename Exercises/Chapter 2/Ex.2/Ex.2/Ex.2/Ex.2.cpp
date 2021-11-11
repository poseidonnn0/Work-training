#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    float Radius, area = 0, PI;
    std::cout << "Введите радиус круга = ";
    std::cin >> Radius;
    PI = acos(-1); // Задаём число ПИ
    area = Radius * Radius * PI;
    std::cout << std::endl << "Площадь круга равна = " << area << std::endl;
    return 0;
}

