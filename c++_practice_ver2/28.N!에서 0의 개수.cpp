#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main()
{
	int n, sum=1;
	int tmp;
	int max = -2147000000;
	int cnt = 0;

	cin >> n;

	for (size_t i = 2; i <= n; i++)
	{
		sum *= i;
	}

	for (size_t i = 1; i < n; i++)
	{
		tmp = sum % 10;
		if (tmp == 0)cnt++;
		else cnt = 0;
		if (cnt > max) max = cnt;
		sum = sum / 10;
		if (sum < 0)break;
	}
	cout << max << endl;

	return 0;
}