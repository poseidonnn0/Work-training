#include <iostream>
#include <fstream>
#include <string>
#include <Staff.hpp>
int main()
{
    setlocale(LC_ALL, "Rus");
    std::ifstream in("Employes.dat");
    std::string word;
    std::cout << "Введите проверяемую должность: ";
    std::cin >> word;
    VK::Staff staff = VK::Staff(in, word);
    staff.print();
}
