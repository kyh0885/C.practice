#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int avg, num, sum;
	int min = 2147000000;

	vector<vector<int>>v;
	vector<int> com(9, 0);
	for (size_t i = 0; i < 9; i++)
	{
		for (size_t j = 0; j < 9; j++)
		{
			cin >> v[i][j];
		}
//		v.push_back(com);
	}

	for (size_t i = 0; i < 9; i++)
	{
		sum=0;
		for (size_t j = 0; j < 9; j++)
		{
			sum = sum + v[i][j];
		}
		avg = (sum / 9.0)+0.5;
		cout << avg << endl;
		for (size_t j = 0; j < 9; j++)
		{
			int Arry[9];
			Arry[j] = avg - v[i][j];
			if (min > abs(Arry[j]))
			{
				min = Arry[j];
				num = j;
			}
		}
		cout << avg << " " << com[num] << endl;
		
	}
	return 0;
}




