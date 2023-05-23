#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int data[50];
	int data2[50];
	int cnt = 0;
	int n;

	cin >> n;

	for (size_t i = 1; i <=n; i++)
	{
		data[i] = i;
	}
	for (size_t i = 1; i <= n; i++)
	{
		cnt = 0;
		for (size_t j = 1; j <= data[i]; j++)
		{
			if (data[i] % j == 0)
			{
				cnt++;
			}
			
		}
		data2[i] = cnt;
	}
	
	for (size_t i = 1; i <= n; i++)
	{
		cout << data2[i];
	}

	return 0;
}

