#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main()
{
	int n, flag;
	int cnt = 0;
	cin >> n;
	for (size_t i = 2; i <= n; i++)
	{	
		flag = 1;
		for (size_t j = 2; j*j <= i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}if (flag == 1) cnt++;

	}
	
	cout << cnt << endl;
	return 0;
}
