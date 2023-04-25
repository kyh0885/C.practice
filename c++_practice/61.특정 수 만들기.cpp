#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;

int n, a[11];
int total;
int sum = 0;
bool flag = false;
int cnt = 0;
void DFS(int L, int sum)// 부분집합의 합
{
	if (flag == true) return;
	if (L == n + 1) //종료지점이 왔을 때 -> 7일때
	{
		if (sum == total)
		{
			cnt++;
		}
	}
	else
	{
		DFS(L + 1, sum + a[L]);
		DFS(L + 1, sum - a[L]);
		DFS(L + 1, sum);
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	cin >> n >> total;
	for (size_t i = 1; i <= n; i++)
	{
		cin >> a[i]; // 입력받은 배열생성
	}
	DFS(1, 0);
	cout << cnt << endl;
	return 0;
}




