
#include "pch.h"
#include "SelectionSort.h"


/*
	SelectionSort
	Standard implementation of selection sort of an array

	Time Complexity: O(n2) - n interations of n loop
	Space Complexity: O(1) - constant time because operations performed in place on array

*/
void SelectionSort(int values[], int n)
{
	int smallIndex = 0;
	bool isSorted = false;

	while (!isSorted)
	{
		isSorted = true;
		for (auto i = 1 + smallIndex; i < n; i++)
		{
			if (values[smallIndex] > values[i])
			{
				int temp = values[i];
				values[i] = values[smallIndex];
				values[smallIndex] = temp;
				isSorted = false;
			}
		}
		smallIndex++;
	}
}