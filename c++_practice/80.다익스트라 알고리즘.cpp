#include <stdio.h>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;
struct Edge {
	int vex;
	int dis;
	Edge(int a, int b) {
		vex = a;
		dis = b;
	}
	bool operator<(const Edge& b) const {
		return dis > b.dis;
	}
};

int main() {
	// 행렬만들기
	priority_queue<Edge>Q; // 내림차순으로 정렬됨
	vector<pair<int, int>>graph[30];
	int a, b, n, m,k;
	
	cin >> a >> b;
	for (size_t i = 1; i <= b; i++) {
		cin >> n >> m >> k;
		graph[n].push_back(make_pair(m, k));
	}
	vector <int> dist(a + 1, 2147000000);
	Q.push(Edge(1, 0));
	dist[1] = 0;
	while (!Q.empty()) {

		int now = Q.top().vex;
		int cost = Q.top().dis;
		Q.pop();
		if (cost > dist[now]) continue;
		for (size_t i = 0; i < graph[now].size(); i++)
		{
			int next = graph[now][i].first;
			int nextDist = cost + graph[now][i].second;
			if (dist[next] > nextDist) {
				dist[next] = nextDist;
				Q.push(Edge(next, nextDist));
			}
		}
	}
	

	for (size_t i = 2; i <= a; i++)
	{
		if (dist[i] != 2147000000) cout << i << ":" << dist[i] << endl;
		else cout << i << ":" << "impossible" << endl;
	}
	
	return 0;
}