#include <Employes.hpp>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
namespace VK
{
    Employee::Employee(std::string& post1, std::string& name1, std::string& hours1)
    {

        Post = post1;
        Name = name1;
        Hours = hours1;
    }
    Employee::~Employee() { /*std::cout << "Destructor Employee";*/ }

    void Employee::Print1()
    {
        std::cout << Post << " " << Name << " " << Hours;
    }
    void Employee::test(std::string& word)
    {
        int Hours_int;
        const char* temp = Hours.c_str();
        Hours_int = std::stoi(temp);
        int pay;
        if ((Post == word) && (word == "director"))
        {
            pay = director * Hours_int;
            std::cout << Post << " " << Name << " " << pay << '\n';
        }
        else if ((Post == word) && (word == "programmer"))
        {
            pay = programmer * Hours_int;
            std::cout << Post << " " << Name << " " << pay << '\n';
        }
        else if ((Post == word) && (word == "assistant"))
        {
            pay = assistant * Hours_int;
            std::cout << Post << " " << Name << " " << pay << '\n';
        }
    }
}

