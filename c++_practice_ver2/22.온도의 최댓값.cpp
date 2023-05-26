#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main()
{
	int data[100];
	int sum = 0;
	int tmp;
	int max = -2147000000;
	int n, k;

	cin >> n >> k;
	for (size_t i = 1; i <= n; i++)
	{
		cin >> data[i];
	}

	for (size_t i = 1; i <= n; i++)
	{
		sum = 0;
		for (size_t j = i; j < i + k; j++)
		{
			sum += data[j];
		}
		if (sum > max) max = sum;
	}

	cout << max << endl;

	return 0;
}