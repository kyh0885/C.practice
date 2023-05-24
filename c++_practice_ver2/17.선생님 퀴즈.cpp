#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main()
{
	int data[100];
	int data2[100];
	int res;
	int n;
	cin >> n;
	for (size_t i = 1; i <=n; i++)
	{
		cin >> data[i] >> data2[i];
	}

	for (size_t i = 1; i <= n; i++)
	{
		res = 0;
		for (size_t j = 1; j <= data[i]; j++)
		{
			res += j;
		}
		if (res == data2[i])
		{
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	
	return 0;
}