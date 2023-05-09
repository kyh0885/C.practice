#include <iostream>
#include <ctime>
#include <queue>

using namespace std;

int map[100][100];
int com[100][100];
int n, cnt = 0;
int dx[8] = { 0, 1, 1, 1, 0, -1, -1, -1 }; //8방향으로 향함
int dy[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };

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
	cin >> n;
	for (size_t i = 1; i <= n; i++)
	{
		for (size_t j = 1; j <= n; j++)
		{
			cin >> map[i][j];
		}
	}

	for (size_t i = 1; i <=n; i++)
	{
		for (size_t j = 1; j <= n; j++)
		{
			if (map[i][j] == 1) {
				Q.push(Loc(i, j));
				map[i][j] = 0;
				while (!Q.empty()) {
					Loc tmp = Q.front();
					Q.pop();
					for (size_t i = 0; i < 8; i++)
					{
						int xx = tmp.x + dx[i];
						int yy = tmp.y + dy[i];
						if (map[xx][yy] == 1) {
							Q.push(Loc(xx, yy));
							map[xx][yy] = 0;
						}
					}
				}
				cnt++;
			}
		}
	}

	cout << cnt << endl;

	return 0;
}




