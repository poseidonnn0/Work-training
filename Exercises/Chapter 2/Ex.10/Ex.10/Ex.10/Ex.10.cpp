#include <iostream>
#include <vector>
#include <cstdlib>
int main()
{
	std::vector<float> numbers;
	setlocale(LC_ALL, "Rus");
	float s;
	for (int i = 0; i < 25; i++)
	{
		s = rand() % 25 + 0.1;
		numbers.push_back(s); // Задаём рандомные числа в вектор вещественных чисел
	}
	std::cout << "Значения вектора ДО операции возведения в квадрат: " << std::endl;
	for (int i = 0; i < numbers.size(); i++)
	{
		std::cout << i << ": " << numbers[i] << std::endl;
	}
	for (int i = 0; i < 25; i++)
	{
		numbers[i] = numbers[i] * numbers[i];
	}
	std::cout << std::endl << "Значения вектора ПОСЛЕ операции возведения в квадрат: " << std::endl;
	for (int i = 0; i < numbers.size(); i++)
	{
		std::cout << i << ": " << numbers[i] << std::endl;
	}
	return 0;
}
