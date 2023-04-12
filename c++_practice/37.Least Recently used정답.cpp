#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sstream>
int C[20];
using namespace std;
int main()
{
	int s, n, a, i, j, pos;
	for (size_t i = 1; i <=n; i++)
	{
		cin >> s;
		cin >> n;
		for (size_t i = 1; i <= n; i++)
		{
			cin >> a;
			pos = -1;
			for (size_t j = 0; j < s; j++) if (C[j] == a)pos = j;
			if (pos == -1)
			{
				for (size_t j = s - 1; j >= 1; j) C[j] = C[j - 1];
			}
			else
			{
				for (size_t j = pos; j >= 1; j--) C[j] = C[j - 1];
			}
			C[j] = a;
		}
	}
	for (size_t i = 0; i < s; i++) cout << C[i] << endl;
	return 0;
}
