#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main()
{
	int a, tmp;
	int cnt = 0;
	cin >> a;

	for (size_t i = 1; i <= a; i++)
	{
		tmp = i; // 바로 i 를 쓰면 안된다.
		while (tmp > 0)
		{
			tmp = tmp / 10;
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
