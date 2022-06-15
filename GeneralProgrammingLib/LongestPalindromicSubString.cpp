#include "pch.h"
#include <string>


string GetLongestPalindromicSubString(const string& input)
{
	if (input.empty())
	{
		return "";
	}

	string longestPalindromeSubString;

	for (auto i = 0; i < input.size(); i++)
	{
		string evenPalindrome = ExpandFromCenter(input, i, i+1);
		string oddPalindrome = ExpandFromCenter(input, i, i);

		if (evenPalindrome.length() > longestPalindromeSubString.length())
		{
			longestPalindromeSubString = evenPalindrome;
		}

		if (oddPalindrome.length() > longestPalindromeSubString.length())
		{
			longestPalindromeSubString = oddPalindrome;
		}
	}

	return longestPalindromeSubString;
}


string ExpandFromCenter(const string& input, int left, int right)
{
	while (left >= 0 && right < input.length() && input[left] == input[right])
	{
		left--;
		right++;
	}

	return input.substr(left + 1, right - left - 1);
}
