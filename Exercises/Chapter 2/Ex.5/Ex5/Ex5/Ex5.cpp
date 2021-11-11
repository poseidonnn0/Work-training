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
	for (int i = v.size()-1; i >= 0; --i)
		std::cout << i << ": " << v[i] << std::endl;
	return 0;
}
