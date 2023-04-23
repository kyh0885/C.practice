#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;
void recur(int x)
{
	if (x == 0) return;
	else
	{
		recur(x - 1);
		cout << x;
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, m;
	cin >> n;
	recur(n);
	return 0;
}




