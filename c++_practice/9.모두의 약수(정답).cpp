#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int cnt[50001];

int main()
{
	int a;
	cin >> a;
	for (size_t i = 1; i <= a; i++)
	{
		for (size_t j = i; j < a; j=j+1)
		{
			cnt[j]++;
		}
	}
	for (size_t i = 0; i < a; i++)
	{
		cout << cnt[i] << " ";
	}
	return 0;
}
