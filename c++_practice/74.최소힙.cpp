#include <iostream>
#include <ctime>
#include <vector>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	vector <int> map[30];
	priority_queue<int> Q;
	int x, a, b, pos, res;

	while (true) {
		cin >> a;
		if (a == 0) {
			if (Q.empty()) cout << "-1" << endl;
			else {
				cout << -Q.top() << endl;
				Q.pop();
			}
		}
		else {
			Q.push(-a);
		}
		if (a == -1) {
			exit(0);
		}
		
	}
	return 0;
}




