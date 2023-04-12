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
	int sum=0;
	int max = -27000000;
	int degree_Data[50];
	cin >> n;
	cin >> m;

	for (size_t i = 0; i < n; i++)
	{
		cin >> degree_Data[i];
	}
	for (size_t i = 0; i < m; i++)
	{
		sum += degree_Data[i];
	}
	max = sum;
	for (size_t i = m; i < n; i++)
	{
		sum = sum + degree_Data[i] + degree_Data[i - m];
		if (sum > max) max = sum;
	}cout << max << endl;

	return 0;
}
