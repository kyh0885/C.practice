#include <iostream>

using namespace std;
int dy[101];
int DFS(int n)
{
	if (dy[n] > 0) return dy[n]; // �޸������̼����� �ð��� ���� �����ش�. dy �迭�ȿ� ����Ű��
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