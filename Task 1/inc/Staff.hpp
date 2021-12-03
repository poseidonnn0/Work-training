#pragma once
#include <iostream>
#include <vector>
#include <Employes.hpp>
#include <fstream>
namespace VK
{
	class Staff
	{
		std::vector <Employee> emploees;
		std::string Word;
	public:
		Staff(std::ifstream& in, std::string &word);
		~Staff() {};
		void print();
	};
}

