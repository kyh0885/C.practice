#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main()
{
	int n;
	int m;
	int cnt = 0;
	int temp;
	int max = -27000000;
	int degree_Data[50];
	cin >> n;
	cin >> m;

	for (size_t i = 0; i < n; i++)
	{
		cin >> degree_Data[i];
	}
	for (size_t i = 0; i < n-1; i++)
	{
		temp = degree_Data[i] + degree_Data[i + 1];
		if (temp > max) max = temp;
	}cout << max << endl;

	return 0;
}
