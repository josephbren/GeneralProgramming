#include "pch.h"


/*
	Worst solution
	Time Complexity O(n2) - += is the reason for n2 as it rebuilds a new string each time through the loop
	Space Complexity 0(n) - size is directly related to number of chars in string

*/
bool isPalindrome2(string input)
{
	string reversedString;

	for (auto ch : input)
	{
		reversedString += ch;
	}

	return reversedString == input;
}


/*
	Best solution
	Time Complexity: O(n) - have to iterate all characters
	Space Complexity: Iterative, O(1) - nothing stored
*/
bool isPalindrome(string input)
{
	auto leftIndex = 0;
	auto rightIndex = input.length() - 1;

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