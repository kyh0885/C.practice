#include <iostream>

using namespace std;
int dy[50];
int main()
{
	int n;
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n;
	dy[1] = 1; // ��Ʈ��ũ�� ���̰� 1�϶�, �ڸ��� ����� 1��
	dy[2] = 2; // ��Ʈ��ũ ���̰� 2�ϱ�, �ڸ��� ����� 2��
	for (size_t i = 3; i <=n; i++)
	{
		dy[i] = dy[i - 2] + dy[i - 1];
	}
	cout << dy[n];
}