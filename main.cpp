#include "lib.h"


int main()
{
	background();
	sort sort;


	cout << "Выберите тип сортировки: \n1. Метод пузырьковой сортировки.\n";
	int i;
	cout << ": ";
	cin >> i;

	int Array[100];
	for (int i = 0; i < 100; i++) 
	{
		Array[i] = rand();
	}

	switch (i)
	{
		case 1:
			sort.Bubble();
			break;
		default:
			break;
	}

	system("pause");
    return 0;
}

