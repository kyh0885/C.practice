#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main()
{
	int data[100];
	int n, m;
	int cnt = 0;
	int max = -2147000000;
	cin >> n >> m;
	for (size_t i = 1; i <= n; i++)
	{
		cin >> data[i];
	}
	for (size_t i = 1; i <= n; i++)
	{
		if (data[i] > m)cnt++;
		else cnt = 0;

		if (cnt > max)max = cnt;
	}

	cout << max << endl;
	return 0;
}