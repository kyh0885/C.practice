#include <iostream>
#include <ctime>
#include <vector>

using namespace std;
// �Է¿��� ���� ������ �̾��� ���� ���� 
// ��¿��� 1���� 5�� ������ �����??
// 2�����迭�� �����Ͽ��� ���߿��� ����Ʈ�� Ǯ�� �ȴ�

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




