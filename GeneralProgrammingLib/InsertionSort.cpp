
#include "pch.h"


/*
	InsertionSort
	Standard implementation of insertion sort of an array.

	Time complexity: O(n2) - loop in loop
	Space complexity: O(1) - constant space since in place swapping only

*/
void InsertionSort(int values[], int n)
{
	for (auto i = 1; i < n; i++)
	{
		int j = i;

		while (j > 0 && (values[j] < values[j - 1]))
		{
			// Swap
			auto temp = values[j];
			values[j] = values[j - 1];
			values[j - 1] = temp;

			j--;
		}
	}
}