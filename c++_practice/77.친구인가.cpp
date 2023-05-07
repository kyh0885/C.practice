#include <iostream>
#include <stdio.h>
#include <vector>

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
	int n, m,a,b;
	vector<int> V[30];
	cin >> n >> m;
	for (size_t i = 1; i <= m; i++)
	{
		cin >> a >> b;
		V[a].push_back(b);
	}
	R(V.[1],)
	return 0;
}

