#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::ifstream in("input.txt");
	//std::ofstream out("output.txt");
	setlocale(LC_ALL, "Rus");
	std::string s;
	int k = 0;
	while (in >> s)
	{
		k++;
	}
	std::cout << "Количество слов в файле, разделённых пробелов = " << k << std::endl;
	return 0;
}
