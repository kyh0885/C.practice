#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	
	cin >> n;
	vector <int> data(n+1); // 반드시 한개더 확보해줘야한다.

	for (size_t i = 1; i <= n; i++)
	{
		cin >> data[i];
	}

	sort(data.begin(), data.end());

	for (size_t i = 1; i <= n; i++)
	{
		cout << data[i] << " ";
	}
	return 0;
}