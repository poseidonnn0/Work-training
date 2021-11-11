#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <windows.h>
int main()
{
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Rus");
	std::vector<std::string> v;
	std::ifstream in("input.txt");
	std::string line;
	while (getline(in, line))
		v.push_back(line);
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << std::endl;
		std::cin.get();
	}
	return 0;
}
