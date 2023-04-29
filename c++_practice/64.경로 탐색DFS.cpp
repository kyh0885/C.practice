#include <iostream>
#include <ctime>
#include <vector>

using namespace std;
// 입력에는 점의 갯수와 이어진 줄의 갯수 
// 출력에는 1에서 5로 갯수가 몇개인지??
// 2차원배열을 선언하여서 이중연결 리스트로 풀면 된다

int map[100][100];
int com[100];
int cnt = 0;
int n, m, a, b; 

void DFS(int v)
{
	if (v == n)
	{
		cnt++;
	}
	else
	{
		for (size_t i = 1; i <= n; i++)
		{
			if (map[v][i] == 1 && com[i] == 0)
			{
				com[i] = 1;
				DFS(i);
				com[i] = 0;
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	

	cin >> n >> m;

	for (size_t i = 1; i <= m; i++)
	{
		cin >> a >> b;
		map[a][b] = 1;
	}

	com[1] = 1;
	DFS(1);

	cout << cnt << endl;

	return 0;
}




