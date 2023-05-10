#include <iostream>
#include <ctime>
#include <queue>

using namespace std;

int map[100][100];
int com[100][100];
int dist[100][100];
int n, m, Min = -2147000000;
int flag = 1;
int dx[4] = {1,-1, 0, 0}; //4방향으로 향함
int dy[4] = {0, 0, 1,-1};

struct Loc {
	int x, y;
	Loc(int a, int b) {//생성자
		x = a;
		y = b;
	}
};

queue <Loc> Q;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	cin >> n >> m;
	for (size_t i = 1; i <= n; i++)
	{
		for (size_t j = 1; j <= m; j++)
		{
			cin >> map[i][j];
			if (map[i][j] == 1) Q.push(Loc(i, j));
		}
	}
	

	while (!Q.empty()) {
		Loc tmp = Q.front();
		Q.pop();

		for (size_t i = 0; i < 4; i++)
		{
			int xx = tmp.x + dx[i];
			int yy = tmp.y + dy[i];
			if (xx > 0 && xx <= n && yy > 0 && yy <= m) {
				if (map[xx][yy] == 0) {
					map[xx][yy] = 1;
					Q.push(Loc(xx, yy));
					dist[xx][yy] = dist[tmp.x][tmp.y] + 1;
				}
				else if (map[xx][yy] == -1) {
					map[xx][yy] = 0;
					Q.push(Loc(xx, yy));
					dist[xx][yy] = dist[tmp.x][tmp.y] + 1;
				}
			}
		}
	}

	for (size_t i = 1; i <= n; i++)
	{
		for (size_t j = 1; j <= m; j++)
		{
			if (Min < dist[i][j]) Min = dist[i][j];
			if (map[i][j] == 0) cout << "-1" << endl;
		}
	}cout << Min << endl;

	return 0;
}




