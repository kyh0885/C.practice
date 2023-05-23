#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int data[50];
	int data2[50];
	int cnt = 0;
	int sum = 0;
	int n;

	cin >> n;

	for (size_t i = 1; i <= n; i++)
	{
		if (i <10)
		{
			data2[i] = 1;
		}
		else if (i >= 10)
		{
			data2[i] = 2;
		}
	}
	for (size_t i = 1; i <=n; i++)
	{
		sum += data2[i];
	}
	cout << sum << endl;
	return 0;
}
