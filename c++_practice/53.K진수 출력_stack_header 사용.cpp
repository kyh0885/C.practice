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
	while (!s.empty()) // stack 이 비어있으면 참을 return -> 그래서 !반대연산자 넣어줘야한다
	{
		cout << str[s.top()]; // 제일 위의 것을 참조만하지 꺼내는 역할은 아니다.
		s.pop();

	}

	return 0;
}




