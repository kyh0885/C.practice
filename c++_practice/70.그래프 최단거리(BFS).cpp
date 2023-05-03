#include <iostream>
#include <ctime>
#include <vector>
#include <queue>

using namespace std;
int ch[10], distance1[10];

int main()
{
	vector <int> map[30];
	queue<int> Q;
	int n, m, x, a, b;
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);


	cin >> a >> b;
	for (size_t i = 1; i <= b; i++)
	{
		cin >> n >> m;
		map[n].push_back(m); //단방향으로 연결
	}

	Q.push(1);
	ch[1] = 1;

	while (!Q.empty()) {
		x = Q.front();
		Q.pop(); // queue front데이터를 삭제

		for (size_t i = 0; i < map[x].size(); i++) { //x와 연결되어있는 노드가 몇개있는가
			if (ch[map[x][i]] == 0) {
				ch[map[x][i]] = 1;
				Q.push(map[x][i]);
				distance1[map[x][i]] = distance1[x] + 1;

			}
		}
	}
	for (size_t i = 2; i <= a; i++)
	{
		cout << i << " : " << distance1[i] << endl;
	}

	return 0;
}




