#include "stdafx.h"
#include <iostream>
#include <climits>

#define MAX(X, Y) (X > Y) ? X : Y
const int N = 5;
int kadane(int* row, int len)
{
	int max_current;
	int max_global = max_current = row[0];
	for (int i = 1; i < len; i++)
	{
		max_current = MAX(row[i], max_current + row[i]);
		if (max_current > max_global)
			max_global = max_current;
	}
	return max_global;
}

int main()
{
	int arr[N];
	std::cout << "Enter the array: ";
	for (int i = 0; i < N; i++)
	{
		std::cin >> arr[i];
	}
	std::cout << "The Max Sum is: " << kadane(arr, N) << std::endl;
	return 0;
}

