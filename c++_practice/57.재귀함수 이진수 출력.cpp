#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;
void recur(int x)
{
	int n, m;
	if (x == 0) return;
	else
	{
		n = x / 2; //���� ��ȯ
		m = x % 2; //�������� ����ϱ� ����
		recur(n);
		cout << m;
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	recur(n);
	return 0;
}




