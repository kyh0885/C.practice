#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

int digit_sum(int x);
int main()
{
	int a[] = { 0, };
	cin >> a[100];

	for (size_t i = 0; i < sizeof(a[100])/4; i++)
	{
		int max = 0;
		//for 문을 써서 최댓값 구하기
		for (size_t j = 0; j < i; j++)
		{
			if (digit_sum(a[j]) > max)
			{
				max = digit_sum(a[j]);
			}cout << max << endl;
		}
	}
	
	return 0;
}

int digit_sum(int x)
{
	int sum = 0;
	while (x > 0)
	{
		sum += x % 10;
		x /= 10;
	}
	return sum;
}