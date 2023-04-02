#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main()
{
	int n, m;
	int cnt = 0;
	int max = -271000000;
	int data[100];
	cin >> n >> m;
	for (size_t i = 1; i < n; i++)
	{
		cin >> data[i];
		if (m > data[i]) cnt++;
		else cnt = 0;

		if (cnt > max) max = cnt;
	}
	if (max == 0) cout << "-1" << endl;
	else cout << max << endl;
	return 0;
}
