#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	int n;
	int sum = 0;
	cin >> n;
	vector<vector<int>>v;
	vector<int> com(n, 0);
	int a[11][11];
	int b[11];
	for (size_t i = 1; i <= n; i++) 
	{
		cin >> b[i];
	}

	for (size_t i = 1; i <= n; i++) // ��ü�� 2 0 3 1�� ä���
	{
		for (size_t j = 1; j <= n; j++)
		{
			a[j][i] = b[i];
		}
	}

	for (size_t i = n; i >= 0; i--)
	{
		cin >> b[i];
	}
	for (size_t i = 1; i <= n; i++)
	{	
		for (size_t j = 1; j <= n; j++)
		{
			int num = b[i];  //1,1,2,3�� �Ųٷ� �����ü� �ֵ���
			if (a[1][j] > num)
			{
				a[1][j] = num;
			}
		}
	}
	for (size_t i = 1; i <=n; i++)
	{
		for (size_t j = 1; j <=n; j++)
		{
			sum += a[i][j];
		}
	}
	cout << sum << endl;
	
	return 0;
}




