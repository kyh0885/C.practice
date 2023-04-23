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
		n = x / 2; //몫을 반환
		m = x % 2; //나머지를 출력하기 위함
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




