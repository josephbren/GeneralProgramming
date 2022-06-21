// GeneralProgramming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"

#include <iostream>
#include <chrono>


void PrintTwoNumberSum()
{
    int inputs[] = { 3, 5, -4, 8, 11, 1, -1, 6 };
    int n = sizeof(inputs) / sizeof(inputs[0]);

    // Optimal solution
    auto start = chrono::steady_clock::now();
    auto numbers = GetTwoNumbersThatSumToTarget(inputs, n, 10);
    auto end = chrono::steady_clock::now();

    chrono::duration<double> elapsedSeconds = end - start;

    if (numbers.size() > 0)
    {
        cout << "The two numbers that total the target are: " << endl;
        for (auto num : numbers)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "No number combination returns the target sum" << endl;
    }

    cout << "The elapsed time in seconds is: " << elapsedSeconds.count() << endl;

    // Alternative solution
    start = chrono::steady_clock::now();
    auto numbers2 = GetTwoNumbersThatSumToTarget2(inputs, n, 10);
    end = chrono::steady_clock::now();

    elapsedSeconds = end - start;

    if (numbers2.size() > 0)
    {
        cout << "The two numbers that total the target are: " << endl;
        for (auto num : numbers2)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "No number combination returns the target sum" << endl;
    }

    cout << "The elapsed time in seconds is: " << elapsedSeconds.count() << endl;


    // Brute force (naive) solution
    start = chrono::steady_clock::now();
    auto numbers3 = GetTwoNumbersThatSumToTarget3(inputs, n, 10);
    end = chrono::steady_clock::now();

    elapsedSeconds = end - start;

    if (numbers3.size() > 0)
    {
        cout << "The two numbers that total the target are: " << endl;
        for (auto num : numbers3)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "No number combination returns the target sum" << endl;
    }

    cout << "The elapsed time in seconds is: " << elapsedSeconds.count() << endl;

    cout << "The first algorithm is more optimal for time complexity for larger input arrays";
}


void PrintBubbleSort()
{
    int values[] = { 5, 3, 2, 7, 9, 4, 12 };
    int n = sizeof(values) / sizeof(values[0]);

    BubbleSort(values, n);

    cout << "The bubble sorted array is: ";
    for (auto value : values)
    {
        cout << value << " ";
    }

    cout << endl;
}


void PrintInsertionSort()
{
    int values[] = { 5, 3, 2, 7, 9, 4, 12 };
    int n = sizeof(values) / sizeof(values[0]);

    InsertionSort(values, n);

    cout << "The insertion sorted array is: ";
    for (auto value : values)
    {
        cout << value << " ";
    }

    cout << endl;
}


void PrintSelectionSort()
{
    int values[] = { 5, 3, 2, 7, 9, 4, 12 };
    int n = sizeof(values) / sizeof(values[0]);

    SelectionSort(values, n);

    cout << "The selection sorted array is: ";
    for (auto value : values)
    {
        cout << value << " ";
    }

    cout << endl;
}


void PrintIsPalindrome()
{
    string input = "A man, a plan, a canal: Panama";
    
    if (isPalindrome(input))
    {
        cout << "The input string " << input << " is a palindrome";
    }
    else
    {
        cout << "The input string " << input << " is not a palindrome";
    }
}


void PrintLongestPalindromicSubstring()
{
    string input = "aaaaabklbaaca";

    cout << "The longest palindromic string is " << GetLongestPalindromicSubString(input);
}


void PrintMergedSortedLists()
{
    Node* list1 = new Node(1);
    list1->_next = new Node(2);
    list1->_next->_next = new Node(4);

    Node* list2 = new Node(1);
    list2->_next = new Node(3);
    list2->_next->_next = new Node(4);

    Node* mergedList = MergeSortedListsIteratively(list1, list2);

    while (mergedList)
    {
        cout << mergedList->_data << " -> ";
        mergedList = mergedList->_next;
    }
}


void PrintStockProfit()
{
    int prices[] = { 5, 2, 7, 1, 1 };
    int size = sizeof(prices) / sizeof(prices[0]);

    cout << "The maximum profit will be: " << GetStockProfit(prices, size);
}


int main()
{
    PrintTwoNumberSum();
    cout << endl << endl;
    PrintBubbleSort();
    cout << endl << endl;
    PrintInsertionSort();
    cout << endl << endl;
    PrintSelectionSort();
    cout << endl << endl;
    PrintIsPalindrome();
    cout << endl << endl;
    PrintLongestPalindromicSubstring();
    cout << endl << endl;
    PrintMergedSortedLists();
    cout << endl << endl;
    PrintStockProfit();
    cout << endl << endl;
}