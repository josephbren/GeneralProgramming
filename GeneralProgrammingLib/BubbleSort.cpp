
#include "pch.h"
#include "BubbleSort.h"

/*
	Bubble Sort
	Time complexity O(n2)
	Space complexity O(1)
*/

void BubbleSort(int values[], int n)
{
	bool isSorted = false;
	int counter = 0;

	while (!isSorted)
	{
		isSorted = true;
		for (auto i = 0; i < n - 1 - counter; i++)	// The -counter is an additional small optimization. After every loop iteration the unsorted largest value is pushed to the end
		{
			// Swap i && j
			if (values[i] > values[i + 1])
			{
				auto temp = values[i];
				values[i] = values[i + 1];
				values[i + 1] = temp;

				isSorted = false;
			}
		}
		counter++;
	}
}