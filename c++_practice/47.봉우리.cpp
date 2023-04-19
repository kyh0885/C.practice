#include<stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
/*
5
5 3 7 2 3
3 7 1 6 1
7 2 5 3 4
4 3 6 4 1
8 7 3 5 2
*/
using namespace std;
int n;
int main()
{
	cin >> n;
	int cnt = 0;
	int flag;
	vector<vector<int>>v;
	vector<int> com(n+2,0);

	int dx[4] = { -1,0,1,0 }; // За
	int dy[4] = { 0,1,0,-1 }; // ї­
	//vector<int> com;
	v.push_back(com);
	for (size_t i = 1; i <= n; i++)
	{
		//com.clear();
		
		for (size_t j = 1; j <= n; j++)
		{
			cin >> com[j];
			//int input = 0;
			//cin >> input;
			//com.push_back(input);
		}
		v.push_back(com);
	}
	vector<int> last_com(n+2, 0);
	v.push_back(last_com);

	for (size_t i = 1; i <= n; i++)
	{
		for (size_t j = 1; j <= n; j++)
		{
			flag = 0;
			for (size_t k = 0; k < 4; k++)
			{
				if (v[i][j] <= v[i + dx[k]][j + dy[k]])
				{
					flag = 1;
					break;
				}
			}
			if (flag == 0)
			{
				cnt++;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}




