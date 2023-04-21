#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;
int a[1501];
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, p2,p3,p5, min;
	cin >> n;
	
	a[1] = 1;
	p2 = p3 = p5 = 1;
	for (size_t i = 2; i <=n; i++)
	{
		if (a[p2] * 2 < a[p3] * 3)
		{
			min = a[p2] * 2;
		}
		else min = a[p3] * 3;
		if (a[p5] * 5 < min)
		{
			min = a[p5] * 5;
		}

		if (a[p2] * 2 == min) p2++;
		if (a[p3] * 3 == min) p3++;
		if (a[p5] * 5 == min) p5++;

		a[i] = min;
	}
	cout << a[n] << endl;
	return 0;
}




