#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n;

	// 배열 생성
	vector<int> pv(n);
	for (size_t i = 0; i < n; i++)
	{
		cin >> pv[i];
	}
	cin >> m;
	vector<int> fv(m);
	for (size_t i = 0; i < m; i++)
	{
		cin >> fv[i];
	}
	for (size_t i = 0; i < n; i++)
	{
		if (find(pv.begin(), pv.end(), fv[i]) != pv.end())
			cout << fv[i] << " ";
	}
	sort(fv.begin(), fv.end());
	for (size_t i = 0; i < n; i++)
	{
		cout << fv[i] << " ";
	}
	
	return 0;
}
