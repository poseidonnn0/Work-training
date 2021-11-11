#include <iostream>
#include <vector>
int main()
{
	std::vector<float> v1, v2, v3;
	setlocale(LC_ALL, "Rus");
	float s;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Введите " << i+1 << " значение первого(1) вектора = ";
		std::cin >> s;
		v1.push_back(s); // Задаём рандомные числа в вектор вещественных чисел
		std::cout << "Введите " << i+1 << " значение второго(2) вектора = ";
		std::cin >> s;
		v2.push_back(s); // Задаём рандомные числа в вектор вещественных чисел
	}
	for (int i = 0; i < ((v1.size() > v2.size())? v1.size() : v2.size()); i++)
	{
		v3.push_back(v1[i] + v2[i]);
	}
	for (int i= 0; i < v3.size(); i++)
	{
		std::cout << "v1[" << i << "] = " << v1[i] << " v2[" << i << "] = " << v2[i] << " v3[" << i << "] = " << v3[i] << std::endl;
	}
	for (int i = 0; i < v3.size(); i++)
	{
		std::cout << v1[i] << " + " << v2[i] << " = " << v3[i] << std::endl;
	}
	return 0;
}
