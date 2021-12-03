#include <iostream>
#include <string>
#include <Staff.hpp>
#include <fstream>
#include <sstream>
namespace VK
{
    Staff::Staff(std::ifstream& in, std::string& word)
    {
        //std::ifstream in("Employes.dat");
        Word = word;
        std::string s;
        while (getline(in, s))
        {
            std::stringstream file(s);
            std::string part;
            std::vector<std::string> field; // Чтобы обнулять вектор (заного задавать его)

            while (getline(file, part, ';')) // отдельно каждое слово до ";"
            {
                field.push_back(part);
            }
            emploees.push_back(Employee({field.at(0),field.at(1),field.at(2)}));
        }
        in.close();
    }
    void Staff::print()
    {
        for (auto& i : emploees)
        {
            i.Employee::test(Word);
        }
    }
}
