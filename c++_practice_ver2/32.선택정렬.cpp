#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main()
{
	int n;
	int data[10];
	int data2[10];
	int cnt = 0;

	cin >> n;

	for (size_t i = 1; i <= n; i++)
	{
		cin >> data[i];
	}

	for (size_t i = n; i >= 1; i--)
	{
		cnt = 0;
		for (size_t j = 1; j <=n; j++)
		{
			if (data[i] > data[j])
			{
				cnt++;
			}
		}
		data2[cnt + 1] = data[i];
	}
	
	for (size_t i = 1; i <= n; i++)
	{
		cout << data2[i] << " ";
	}
	
	return 0;
}