#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main()
{
	int data[100];
	int n,tmp=0;
	int max = -2174000000;
	int cnt = 0;

	cin >> n;
	for (size_t i = 1; i <= n; i++)
	{
		cin >> data[i];
	}

	max = data[n];

	for (size_t i = n - 1; i >= 1; i--)
	{
		if (data[i] > max)
		{
			max = data[i];
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}