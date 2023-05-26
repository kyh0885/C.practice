#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main()
{
	int data[100];
	int data2[100];
	int res[100];
	int n, tmp;
	int flag = 0;

	cin >> n;

	for (size_t i = 1; i <= n; i++)
	{
		cin >> data[i];
	}
	for (size_t i = 1; i < n; i++)
	{
		data2[i] = i;
	}
	
	for (size_t i = 1; i < n; i++)
	{
		tmp = data[i + 1] - data[i];
		res[tmp] = tmp;
	}
	for (size_t i = 1; i < n; i++)
	{
		if (res[i] == data2[i])flag = 1;
		else flag = 0;
	}

	if (flag == 1) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}