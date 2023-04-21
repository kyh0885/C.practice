#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, m;
	int a, b;
	int max = -2147000000;
	int sum = 0;
	cin >> n >> m;
	
	vector<vector<int>> v; //2차원 배열
	vector<int> com(m+1, 0);
	
	for (size_t i = 1; i <= n; i++)
	{
		for (size_t j = 1; j <= m; j++)
		{
			cin >> com[j];
		}
		v.push_back(com);
	}
	
	cin >> a >> b;
	// for 4번 돌리기
	for (size_t i = 1; i <= n; i++)
	{
		for (size_t j = 1; j <= m; j++)
		{
			for (size_t k = 1; k <= a+n; k++)
			{
				for (size_t s = 1; s <= b+m; s++)
				{
					sum += v[k][s];
					
				}
			}
			if (sum > max)
			{
				max = sum;
			}
		}
	}
	
	cout << max << endl;
	return 0;
}




