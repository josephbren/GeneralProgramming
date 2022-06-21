#include "pch.h"

/*
*   Leet code question 121
* 
	You are given an array prices where prices[i] is the price of a given stock on the ith day.
	You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
	Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/

#include "BestTimeToBuySellStock.h"

/*
	Brute force solution
*/
int GetStockProfit(int prices[], int size)
{
	int maximumProfit = 0;

	if (size <= 0) return maximumProfit;

	for (auto i = 0; i < size - 1; i++)
	{
		for (auto j = i + 1; j < size; j++)
		{
			int profit = prices[j] - prices[i];
			if (profit > maximumProfit)
			{
				maximumProfit = profit;
			}
		}
	}

	return maximumProfit;
}


/*
	Optimized solution
*/

int GetStockProfit(int prices[], int size)
{
	int res = 0;
	int minVal = INT_MAX;

	for (auto i = 0; i < size; i++)
	{
		if (prices[i] < minVal)
		{
			minVal = prices[i];
		}

		res = max(res, prices[i] - minVal);
	}
}