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
	vector <int> data(n+1); // �ݵ�� �Ѱ��� Ȯ��������Ѵ�.

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