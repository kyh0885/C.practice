#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main()
{
	int n;
	int data[10];
	int data2[10]; //최종성적의 입력되는 곳
	int max = -21470000;
	int cnt = 0;

	cin >> n;

	for (size_t i = 1; i <= n; i++)
	{
		cin >> data[i];
	}

	for (size_t i = 1; i <= n; i++)
	{
		cnt = 0;
		for (size_t j = 1; j <= n; j++)
		{
			if (data[i] < data[j])
			{
				cnt++;
			}
		}
		data2[cnt + 1] = data[i];
	}

	return 0;
}