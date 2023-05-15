#include <iostream>

using namespace std;
int dy[101];
int DFS(int n)
{
	if (dy[n] > 0) return dy[n]; // 메모이제이션으로 시간을 단축 시켜준다. dy 배열안에 기억시키기
	if (n == 1 || n == 2) return n;
	else return dy[n] = DFS(n - 1) + DFS(n - 2);
}
int main()
{
	int n;
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n;
	cout << DFS(n);
	return 0;
}