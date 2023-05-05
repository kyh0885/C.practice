#include <iostream>
#include <ctime>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
struct Loc {
	int x, y, z;
	Loc(int a, int b, int c) {//������
		x = a;
		y = b;
		z = c;
	}
	bool operator<(const Loc& b) const {//������ �����ε�
//		return x < b.x; //������������ �����ض�, ������������ ����ʹٸ� '>'
		if (x != b.x) return x < b.x;
		if (y != b.y) return y < b.y;
		if (z != b.z) return z < b.z;
	}
};

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	vector<Loc> XY;
	XY.push_back(Loc(2, 3, 5));
	XY.push_back(Loc(3, 6, 7));
	XY.push_back(Loc(2, 3, 1));
	XY.push_back(Loc(5, 2, 3));
	XY.push_back(Loc(3, 1, 6));
	sort(XY.begin(), XY.end());

	for (auto pos:XY) {
		cout << pos.x << " " << pos.y << " " << pos.z << endl;
	}

	return 0;
}

