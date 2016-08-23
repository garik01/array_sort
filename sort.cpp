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
	int temp;
	for (int i = 0; i < max - 1; ++i)
	{
		int pos = i;
		temp = arr[i];
		for (int j = i + 1; j < max - 1; ++j)
		{
			if (arr[j] < temp)
			{
				pos = j;
				temp = arr[j];
			}
		}
		arr[pos] = arr[i];
		arr[i] = temp; 
	}
	return arr;
}

int *sort::BubbleSort(int *arr, int max)
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

int *sort::InsertSort(int *arr, int max)
{
	int temp;
	for (int i = 1, j; i < max - 1; ++i)
	{
		temp = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > temp; --j)
			arr[j + 1] = arr[j];
		arr[j + 1] = temp;   
	}
	return arr;
}

int *sort::ShellSort(int *arr, int max)
{
	long inc, i, j, seq[40];
	int s;

	s = increment(seq, max);
	while (s >= 0) 
	{
		inc = seq[s--];
		for (i = inc; i < max; ++i)
		{
			int temp = arr[i];
			for (j = i - inc; (j >= 0) && (arr[j] > temp); j -= inc)
				arr[j + inc] = arr[j];
			arr[j] = temp;
		}
	}
	return arr;
}

int sort::increment(long inc[], long size)
{
	int p1, p2, p3, s;
	p1 = p2 = p3 = 1;
	s = -1;
	do
	{
		if (++s % 2)
		{
			inc[s] = 8 * p1 - 6 * p2 + 1;
		}
		else
		{
			inc[s] = 9 * p1 - 9 * p3 + 1;
			p2 *= 2;
			p3 *= 2;
		}
		p1 *= 2;
	} while (3 * inc[s] < size);

	return s > 0 ? --s : 0;
}

int *sort::HeapSort(int *arr, int max)
{
	return 0;
}

sort::sort()
{
	srand(time(NULL));
}

sort::~sort()
{
}
