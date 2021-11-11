#include <iostream>
#include <vector>
#include <random>
#include <ctime>
int main()
{
	std::vector<float> Number;
	std::mt19937 mersenne(static_cast<unsigned int>(time(0)));
	float s;
	for (int i = 0; i < 25; i++)
	{
		Number.push_back(mersenne()); // Задаём рандомные числа в вектор вещественных чисел
	}
	for (int i = 0; i < Number.size(); i++)
	{
		std::cout << i << ": " << Number[i] << std::endl;
	}
	return 0;
}
