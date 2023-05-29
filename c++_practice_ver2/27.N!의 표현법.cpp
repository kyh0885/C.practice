#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main()
{
	int ch[100];
	int n,j,tmp;

	cin >> n;
	cout << n << " ! = ";

	for (size_t i = 2; i <= n; i++)
	{
		tmp = i;
		j = 2;
		while (1)
		{
			if (tmp % j == 0)
			{
				tmp = tmp / j;
				ch[j]++;
			}
			else j++;
			if (tmp == 1)break;
		}
		for (size_t i = 2; i <= n; i++)
		{
			if (ch[i] != 0) cout << ch[i];
		}
		return 0;
	}
}