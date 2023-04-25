#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;

int n, ch[11];
int sum = 0;
bool flag = false;
void DFS(int L, int sum2)// 부분집합의 합
{
	if (sum2 > (sum / 2)) return;
	if (flag == true) return;
	if (L == n + 1) //종료지점이 왔을 때 -> 7일때
	{
		if (sum2 == (sum - sum2))
		{
			flag = true;
		}
	}
	else
	{
		DFS(L + 1, sum2+ch[L]);
		DFS(L + 1, sum2);
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	cin >> n;
	for (size_t i = 1; i <= n; i++)
	{
		cin >> ch[i]; // 입력받은 배열생성
		sum += ch[i];
	}
	DFS(1,0);
	if (flag)
	{
		cout << "Yes" << endl;
	}
	else cout << "No" << endl;
	return 0;
}




