// GeneralProgrammingLib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include <unordered_set>
#include <algorithm>
#include "framework.h"
#include "TwoNumberSum.h"

/*
	Optimal solution
	Use a hash to store the processed numbers as we walk the array. If the
	"differenceNum" is found in the hash then we can confirm that there are at least
	two numbers that sum to the target number

	Time - O(n) since we traverse the array
	Space - 0(n) since we are using a hash to track n numbers
*/
vector<int> GetTwoNumbersThatSumToTarget(int values[], int n, int targetNum)
{
	unordered_set<int> valuesHash;

	for (auto i = 0; i < n; i++)
	{
		int differenceNum = targetNum - values[i];
		if (valuesHash.find(differenceNum) != valuesHash.end())
		{
			return { values[i], differenceNum };
		}
		else
		{
			// Add it to the hash
			valuesHash.emplace(values[i]);
		}
	}

	return {};
}


/*
	Alternative solution
	The alternative solution first sorts the array from lowest to highest. Secondly it
	walks the sorted array from left to right and right to left using left and right pointers. It
	will immediately return when a match is found
 
	Time complexity : O(nlogn) for worst case when sorting using QuickSort. Walking the array is 
	faster as it's only O(n) and thus can be excluded as a parameter for BigO
	Space complexity : O(1) since we only ever, at most, have a right and left pointer
*/
vector<int> GetTwoNumbersThatSumToTarget2(int values[], int n, int targetNum)
{
	if (n <= 0)
		return {};

	sort(values, values + n);

	int lpIndex = 0;
	int rpIndex = n - 1;

	while (lpIndex < rpIndex)
	{
		int differenceNum = values[rpIndex] + values[lpIndex];

		if (differenceNum == targetNum)
		{
			return { values[lpIndex], values[rpIndex] };
		}
		else
		{
			if (differenceNum > targetNum)
			{
				rpIndex--;
			}
			else
			{
				lpIndex++;
			}
		}
	}

	return {};
}


/*
	Brute force solution

	In the brute force (naive) solution, we will walk the array for each element in the array
	until the target number is found

	Time complexity O(n2) since we are looping in a loop
	Space complexity O(1) since we keep a constant amount of data in memory

*/
vector<int> GetTwoNumbersThatSumToTarget3(int values[], int n, int targetNum)
{
	for (auto i = 0; i < n; i++)
	{
		for (auto j = 0; j < n; j++)
		{
			if (values[i] + values[j] == targetNum)
			{
				return { values[i], values[j] };
			}
		}
	}

	return {};
}