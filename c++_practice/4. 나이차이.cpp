//������ ���� ���� ��쿡�� freopen�� ���Ͽ��� ���ڸ� �Է½�Ű�� �ȴ�.

#include <iostream>

using namespace std;
int main() {
	//freopen("input.txt", "rt", stdin);
	int n, i, a, max = -2147000000, min = 2147000000;

	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a;
		if (max < a) max = a;
		if (min > a) min = a;
	}

	cout << max - min << endl;
	return 0;
}
