// GeneralProgramming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>
#include "TwoNumberSum.h"
#include "BubbleSort.h"

using namespace std;


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

    cout << "The sorted array is: ";
    for (auto value : values)
    {
        cout << value << " ";
    }

    cout << endl;
}


int main()
{
    PrintTwoNumberSum();
    cout << endl << endl;
    PrintBubbleSort();
}