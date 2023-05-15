#include <iostream>

using namespace std;
int dy[50];
int main()
{
	int n;
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n;
	dy[1] = 1; // 네트워크의 길이가 1일때, 자르는 방법은 1개
	dy[2] = 2; // 네트워크 길이가 2일까, 자르는 방법은 2개
	for (size_t i = 3; i <=n; i++)
	{
		dy[i] = dy[i - 2] + dy[i - 1];
	}
	cout << dy[n];
}