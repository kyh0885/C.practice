#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;
void D(int v)
{
	if (v > 7) return; // 노드번호가 7이면
	else
	{
		D(v * 2);
		D(v * 2+1);
		cout << v;
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	D(1);
	return 0;
}




