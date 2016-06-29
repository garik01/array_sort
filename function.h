#include <time.h>
#include <iostream>

class sort
{
private:
	int max_index = 10;
	int *Array = new int[max_index];
	int start_random = 0;
	int finish_random = 9;

	int Random()
	{
		return start_random + rand() % finish_random;
	}
	void Add()
	{
		srand(time(NULL));
		std::cout << "Начальный результат: \n";
		for (int i = 0; i < max_index; i++) 
		{
			Array[i] = Random();
			std::cout << Array[i];
		}
		std::cout << "\n";

	}
	void Present()
	{
		std::cout << "Конечный результат: \n";
		for (int i = 0; i < max_index; i++)
		{
			std::cout << Array[i];
		}
		std::cout << "\n";
	}
public:
	void Bubble()
	{
		Add();
		for (int i = 0; i < max_index; i++)
			for (int j = max_index - 1; j >= i; j--)
				if (Array[j - 1] > Array[j])
				{
					int temp = Array[j - 1];
					Array[j - 1] = Array[j];
					Array[j] = temp;  // Можно использовать без лишней переменной
				}
		Present();
	}
};
