#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, m;
	cin >> n >> m;
	stack<int> s;
	char str[20] = "0123456789ABCDEF";

	while (n > 0)
	{
		s.push(n % m);
		n = n / m;
	}
	while (!s.empty()) // stack �� ��������� ���� return -> �׷��� !�ݴ뿬���� �־�����Ѵ�
	{
		cout << str[s.top()]; // ���� ���� ���� ���������� ������ ������ �ƴϴ�.
		s.pop();

	}

	return 0;
}




