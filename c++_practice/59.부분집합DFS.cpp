#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;

int n, ch[11];
void DFS(int L)
{
	if (L == n + 1) //종료지점이 왔을 때
	{
		for (size_t i = 1; i <= n; i++)
		{
			if (ch[i] == 1)
			{
				cout << i << " ";
			}
			cout << "\n";
		}
	}
	else
	{
		ch[L] = 1;
		DFS(L + 1);
		ch[L] = 0;
		DFS(L + 1);
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	cin >> n;
	DFS(1);
	return 0;
}




