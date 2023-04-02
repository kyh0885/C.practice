#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main()
{
	int n,a,b;
	int sum = 0;
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		cin >> a >> b;
		sum = 0;
		for (size_t j = a; j > 0; j--)
		{
			sum = sum + j;
		}
		if (b == sum) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
