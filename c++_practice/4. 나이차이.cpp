//숫자의 수가 많을 경우에는 freopen을 통하여서 숫자를 입력시키면 된다.

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
