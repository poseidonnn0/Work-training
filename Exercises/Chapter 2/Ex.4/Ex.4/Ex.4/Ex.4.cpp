#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

int main()
{
	SetConsoleCP(1251); // добавляем для того, чтобы проверить слова текста на русском языке кодировки Windows-1251
	setlocale(LC_ALL, "Rus");
	std::ifstream in("input.txt");
	//std::ofstream out("output.txt");

	std::string s, word, s1;
	int k = 0;
	std::cout << "Введите заданное слово: ";
	std::cin >> word;
	while (getline(in, s, ' ')) // Добавляем ' ' в качестве разделителя между словами для проверки слов, разделённых пробелом
	{
		if (s == word)
		{
			k++;
		}
	}
	std::cout << std::endl << "Заданное слово встрчается в тексте " << k << " раз." << std::endl;
	return 0;
}

