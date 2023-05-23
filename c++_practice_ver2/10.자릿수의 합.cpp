#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int digit_sum(int x);
int main()
{
	int data[50];
	int max = -2147000000;
	int num, res;
	int sum = 0;
	int n;

	cin >> n;

	for (size_t i = 1; i <= n; i++)
	{
		cin >> data[i];
	}
	for (size_t i = 1; i <= n; i++)
	{
		sum = digit_sum(data[i]);
		if (sum > max)
		{
			max = sum;
			res = data[i];
		}
		else if (sum == max)
		{
			if (data[i] > res) res = data[i];
		}
	}
	cout << res << endl;
	return 0;
}
int digit_sum(int x)
{
	int sum = 0;
	int tmp;
	while (x > 0)
	{
		tmp = x % 10;
		sum += tmp;
		x = x / 10;
	}

	return sum;
}


