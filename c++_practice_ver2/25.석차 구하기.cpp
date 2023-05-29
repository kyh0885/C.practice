#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main()
{
	int data[100];
	int rank[100];
	int n;

	cin >> n;

	for (size_t i = 1; i <= n; i++)
	{
		cin >> data[i]; // 점수입력
		rank[i] = 1;
	}

	for (size_t i = 1; i <= n; i++)
	{
		for (size_t j = 1; j <= n; j++)
		{
			if (data[i] < data[j]) rank[i]++;
		}
	}
	for (size_t i = 1; i <= n; i++)
	{
		cout << rank[i];
	}
	return 0;
}