#include <iostream>
#include <ctime>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
struct Loc {
	int money, date;
	Loc(int a, int b) {//생성자
		money = a;
		date = b;
	}
	bool operator<(const Loc& b) const {//연산자 오버로딩
		return date > b.date;
	}
};

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	vector<Loc> XY;
	priority_queue<int> Q;
	int x,y,z,income=0,max=-2147000000;
	cin >> x;
	for (size_t i = 1; i <= x; i++)
	{
		cin >> y >> z;
		XY.push_back(Loc(y, z));
		if (z > max) max = z;
	}
	sort(XY.begin(), XY.end());
	int j = 0;
	for (size_t i = max; i >=1; i--)
	{
		for (; j < x; j++)
		{
			if (XY[j].date < i)break;
			Q.push(XY[j].money);
		}
		if (!Q.empty())
		{
			income += Q.top(); // 가장 큰값을 더해라
			Q.pop();
		}
	}
	cout << income << endl;
	return 0;
}

