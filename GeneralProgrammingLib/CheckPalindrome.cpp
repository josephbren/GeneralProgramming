#include "pch.h"

#include "CheckPalindrome.h"


/*
	Time Complexity: O(n) - have to iterate all characters
	Space Complexity: Iterative, O(1) - nothing stored
*/
bool isPalindrome(string input)
{
	int leftIndex = 0;
	int rightIndex = input.size() - 1;

	while (leftIndex < rightIndex)
	{
		if (input[leftIndex] != input[rightIndex])
		{
			return false;
		}

		leftIndex += 1;
		rightIndex -= 1;
	}

	return true;
}