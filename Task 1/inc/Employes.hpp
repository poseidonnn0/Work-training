#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
namespace VK
{
	class Employee
	{
		std::string Post, Name, Hours;
		const int director = 500;
		const int assistant = 200; 
		const int programmer = 350;
	public:
		Employee(std::string& post1, std::string& name1, std::string& hours1);
		Employee() {};
		~Employee();
		void Print1();
		void test(std::string& word);
	};
}