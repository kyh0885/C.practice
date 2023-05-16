#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct Brick {
	int s, h, w;
	Brick(int a, int b, int c) {
		s = a, h = b, w = c;
	}
	bool operator<(const Brick& b)const {
		return s > b.s; //s�� ���� ���� ����
	}
};
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, a, b, c, max_h = 0, res = 0;
	cin >> n;
	vector<Brick> Bricks; 
	vector<int> dy(n,0); 
	for (size_t i = 1; i <= n; i++)
	{
		cin >> a >> b >> c;
		Bricks.push_back(Brick(a, b, c));
	}
	sort(Bricks.begin(), Bricks.end());
	dy[0] = Bricks[0].h;
	res = dy[0];

	for (size_t i = 1; i < n; i++)
	{
		max_h = 0;
		for (int j = i-1; j >= 0; j--)
		{
			if ((Bricks[j].w > Bricks[i].w) && (dy[j] > max_h))
			{
				max_h = dy[j];
			}
		}
		dy[i] = max_h + Bricks[i].h;
		res = max(res, dy[i]);
	}

	cout << res << endl;
	return 0;
}