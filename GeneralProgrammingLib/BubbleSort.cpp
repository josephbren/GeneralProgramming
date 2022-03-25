
#include "pch.h"
#include "BubbleSort.h"


void BubbleSort(int values[], int n)
{
	int j = 0;

	bool swapHasOccurred = true;

	while (swapHasOccurred)
	{
		swapHasOccurred = false;
		for (auto i = 0; i < n - 1 - j; i++)	// The -j is an additional optimization. After every loop iteration the unsorted largest value is pushed to the end
		{
			j = i + 1;

			// Swap i && j
			if (values[i] > values[j])
			{
				auto temp = values[i];
				values[i] = values[j];
				values[j] = temp;

				swapHasOccurred = true;
			}
		}
	}
}