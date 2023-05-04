#include <iostream>
#include <ctime>
#include <vector>
#include <queue>

using namespace std;
int ch[100], distance1[10];
int dx[3] = { -1,1,+5 };

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	vector <int> map[30];
	queue<int> Q;
	int x, a, b, pos, res;
	int cnt = 0;

	cin >> a >> b;

	Q.push(a);
	ch[a] = 1;

	while (!Q.empty()) {
		x = Q.front();
		Q.pop(); // queue front데이터를 삭제

		for (size_t i = 0; i < 3; i++) {
			pos = x + dx[i];

			if (pos <= 0 || pos > 10000) continue;


			if (pos == b) {
				cout << ch[x] << endl;
				exit(0);
			}
			if (ch[pos] == 0) {
				Q.push(pos);
				ch[pos] = ch[x] + 1;
			}
		}
	}


	return 0;
}




