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
	int j = 1;
	
	
 	cin >> n;
	stack<int> s; // stack 선언 시작
	vector<int> a(n+1);
	for (size_t i = 1; i <= n; i++)
	{
		a[i] = i;
	}
	vector<char> str; // 출력을 위한 vector
	for (size_t i = 1; i <= n; i++)
	{
		cin >> m;
		s.push(m); // 교차로 진입
		str.push_back('P');
		while (1)
		{
			if (s.empty()) break;
			if (a[j] == s.top())
			{
				s.pop();
				j++;
				str.push_back('O');
			}
			else break;
		}
		
	}
	if (!s.empty())
	{
		cout << "impossible" << endl;
	}
	else 
	{
		for (size_t i = 0; i < str.size(); i++)
		{
			cout << str[i];
		}
	}
	return 0;
}




