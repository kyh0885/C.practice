#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

int Q[100], front = -1, back = -1,ch[10];
vector <int> map[10];

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, m, x;
	
	for (size_t i = 1; i <= 6; i++)
	{
		cin >> n >> m;
		map[n].push_back(m);
		map[m].push_back(n);
	}

	Q[++back] = 1;
	ch[1] = 1;

	while (front < back) {
		x = Q[++front];
		cout << x ;
		for (size_t i = 0; i < map[x].size(); i++) {
			if (ch[map[x][i]] == 0) {
				ch[map[x][i]] = 1;
				Q[++back] = map[x][i];
			}
		}
	}
	return 0;
}




