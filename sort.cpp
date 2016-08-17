#include "sort.h"

int sort::RandomSim(int start, int finish)
{
	return 0 + rand() % 9;
}

int *sort::RandomArray(int max)
{
	int *Array = new int[max];
	for (int i = 0; i < max - 1; i++)
	{
		Array[i] = RandomSim();
	}
	return Array;
}

int *sort::SelectionSort(int *arr, int max)
{
	int tmp;
	for (int i = 0; i < max - 1; ++i) // i - номер текущего шага
	{
		int pos = i;
		tmp = arr[i];
		for (int j = i + 1; j < max - 1; ++j) // цикл выбора наименьшего элемента
		{
			if (arr[j] < tmp)
			{
				pos = j;
				tmp = arr[j];
			}
		}
		arr[pos] = arr[i];
		arr[i] = tmp; // меняем местами наименьший с a[i]
	}
	return arr;
}

int *sort::Bubble(int *arr, int max)
{
	for (int i = 0; i < max - 1; i++)
	{
		for (int j = max - 2; j >= i; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				arr[j - 1] += arr[j];
				arr[j] = arr[j - 1] - arr[j];
				arr[j - 1] -= arr[j];
			}
		}
	}
	return arr;
}

int *sort::QSort(int *arr, int max)
{
	QS(arr, 0, max - 2);
	return arr;
}

void sort::QS(int *arr, int left, int right)
{
	int i, j; 
	int x, y;
	i = left; j = right; 
	x = arr[(left + right) / 2];
	do {
		while ((arr[i] < x) && (i < right)) i++;
		while ((x < arr[j]) && (j > left)) j--;
		if (i <= j) { 
			y = arr[i];
			arr[i] = arr[j];
			arr[j] = y;
			i++; j--;
		}
	} while (i <= j);
	if (left < j) QS(arr, left, j); if (i < right) QS(arr, i, right);
}

sort::sort()
{
	srand(time(NULL));
}

sort::~sort()
{
}
