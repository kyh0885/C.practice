#include <iostream>
#include <stdio.h>

using namespace std;

int R(int a) {
	if (a == 1) return 1;
	int result = 1;
	for (size_t i = a; i > 1; i--)
	{
		result *= i;
	}
	return result;
}
int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, m;
	cin >> n >> m;
	cout << R(n) / (R(m) * R(n-m)) << endl;
	return 0;
}

