#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

int digit_sum(int x);
int main()
{
	int n, num, i ,sum, max = -2147000000, res;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> num;
		sum = digit_sum(num);
		if (sum > max) 
		{
			max = sum;
			res = num;
		}
		else if (sum == max) 
		{
			if (num > res) res = num;
		}
	}
	cout << res << endl;
	return 0;
}

int digit_sum(int x)
{
	int tmp, sum = 0;
	while (x > 0)
	{
		tmp = x % 10;
		sum += tmp;
		x = x/ 10;
	}
	return sum;
}