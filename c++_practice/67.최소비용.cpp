#include <iostream>
#include <ctime>


using namespace std;

int map[100][100], min1 = 217400000;
int com[100];
int n, m, a, b, c;


void DFS(int x, int sum)
{
	if (x == n) {
		if (sum < min1) {
			min1 = sum;
		}
	}
	else {
		for (size_t i = 1; i <=n; i++)
		{
			if (map[x][i] > 0 && com[i] == 0)
			{
				com[i]= 1;
				DFS(i, sum + map[x][i]);
				com[i] = 0;
			}
			
		}
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	cin >> n >> m;
	for (size_t i = 1; i <= 8; i++)
	{
		cin >> a >> b >> c;
		map[a][b] = c;
	}

	com[1]= 1;
	DFS(1,0);

	cout << min1 << endl;

	return 0;
}




