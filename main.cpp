#include "sort.h"

int main()
{
	system("color 2F");
	setlocale(LC_ALL, "Russian");
	sort Sort;
	int maxIndex = 10;

	std::cout << "Рандомная строка:\n";
	int *Array = Sort.RandomArray(maxIndex);
	for (int i = 0; i < maxIndex - 1; i++)
		std::cout << Array[i];
	std::cout << "\n";

	{
		std::cout << "Сортировка Bubble:\n";
		int *Temp = Sort.Bubble(Array, maxIndex);
		for (int i = 0; i < maxIndex - 1; i++)
			std::cout << Temp[i];
		std::cout << "\n"; 
	}

	{
		std::cout << "Сортировка выбором:\n";
		int *Temp = Sort.SelectionSort(Array, maxIndex);
		for (int i = 0; i < maxIndex - 1; i++)
			std::cout << Temp[i];
		std::cout << "\n";
	}

	{
		std::cout << "Быстрая сортировка: \n";
		int *Temp = Sort.QSort(Array, maxIndex);
		for (int i = 0; i < maxIndex - 1; i++)
			std::cout << Temp[i];
		std::cout << "\n";
	}

	std::cout << "\n";
	system("PAUSE");
	return 0;
}
