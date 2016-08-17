#pragma once
#include <iostream>
#include <time.h>

class sort
{
	int RandomSim(int start = 0, int finish = 9);
	void QS(int *arr, int left, int right);
public:
	int *RandomArray(int max);
	int *SelectionSort(int *arr, int max);
	int *Bubble(int *arr, int max);
	int *QSort(int *arr, int max);
	sort();
	~sort();
};

