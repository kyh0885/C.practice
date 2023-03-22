#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int a;
	
	cin >> a;
	for (size_t i = 1; i <= a; i++) 
	{
		int cnt = 0; //각자의 cnt를 구해야 하므로 여기서 반드시 초기화 해줘야한다.
		for (size_t j = 1; j <= i; j++)
		{
			if (i % j == 0) cnt++;
		}cout << cnt << " ";
	}
	return 0;
}
