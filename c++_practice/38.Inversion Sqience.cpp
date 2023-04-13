#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sstream>
#include <vector>

using namespace std;
int main()
{
	int n,pos;

	cin >> n;
	vector<int> is(n + 1), os(n + 1);
	for (size_t i = 0; i <= n; i++)
	{
		cin >> is[i];
		os[i] = i;
	}
	for (size_t i = n; i >=1; i--)
	{
		pos = i;
		for (size_t j = 0; j <= is[i]; j++)
		{
			os[pos] = os[pos + 1];
			pos++;
		}
		os[pos] = i;
	}
	for (size_t i = 0; i <= n; i++)
	{
		cout<<os[i]<<endl;
	}
	return 0;
}
