#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main()
{
	char data[100];
	char data2[100];
	int res[200] = { 0, };
	int res2[200]= { 0, };
	int tmp;

	cin >> data;
	cin >> data2;
	for (size_t i = 0; data[i] != '\0'; i++)
	{
		tmp = data[i];
		res[tmp]++;
	}
	for (size_t i = 0; data2[i] != '\0'; i++)
	{
		tmp = data2[i];
		res2[tmp]++;
	}

	if (res == res2) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}