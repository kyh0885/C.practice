#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main()
{
	int n, sum = 1;
	int tmp;
	int max = -2147000000;
	int cnt = 0;

	cin >> n;

	for (size_t i = 1; i <= n; i++)
	{
		if (i == 3)cnt++;
		if (i >= 10)
		{
			tmp = i % 10;
			if (tmp == 3) cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}