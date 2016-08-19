#include "sort.h"

/*
	main.cpp представляет пример работы
	различных алгоритмов сортировки:
		1) Сортировка пузырьком (BubbleSort);
		2) Сортировка выбором (SelectSort);
		3) Быстрая сортировка (QSort) без 
		использования готовой функции qsort;
		4) Сортировка вставками (InsertSort);     //не реализовано
		5) Сортировка Шелла (ShellSort);		  //не реализовано
		6) Пирамидальная сортировка (HeapSort);   //не реализовано
*/

int main()
{
	system("color 2F");
	setlocale(LC_ALL, "Russian");
	sort Sort;
	int maxIndex = 10;

	int t = clock();
	std::cout << "Рандомная строка:\n";
	int *Array = Sort.RandomArray(maxIndex);
	for (int i = 0; i < maxIndex - 1; i++)
		std::cout << Array[i];
	std::cout << "\nВремя выполнения: " << clock() - t << "\n";

	{
		int t = clock();
		std::cout << "Сортировка Bubble:\n";
		int *Temp = Sort.BubbleSort(Array, maxIndex);
		for (int i = 0; i < maxIndex - 1; i++)
			std::cout << Temp[i];
		std::cout << "\nВремя выполнения: " << clock() - t << "\n";
	}

	{
		int t = clock();
		std::cout << "Сортировка выбором:\n";
		int *Temp = Sort.SelectionSort(Array, maxIndex);
		for (int i = 0; i < maxIndex - 1; i++)
			std::cout << Temp[i];
		std::cout << "\nВремя выполнения: " << clock() - t << "\n";
	}

	{
		int t = clock();
		std::cout << "Быстрая сортировка: \n";
		int *Temp = Sort.QSort(Array, maxIndex);
		for (int i = 0; i < maxIndex - 1; i++)
			std::cout << Temp[i];
		std::cout << "\nВремя выполнения: " << clock() - t << "\n";
	}

	{
		int t = clock();
		std::cout << "Сортировка вставками: \n";
		int *Temp = Sort.InsertSort(Array, maxIndex);
		for (int i = 0; i < maxIndex - 1; i++)
			std::cout << Temp[i];
		std::cout << "\nВремя выполнения: " << clock() - t << "\n";
	}

	std::cout << "\nВремя выполнения всей программы: " << clock() - t << "\n"; 
	system("PAUSE");
	return 0;
}
