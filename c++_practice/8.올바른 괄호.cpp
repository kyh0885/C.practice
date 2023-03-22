#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	char a[30];
	int cnt = 0;
	int cnt2 = 0;
	cin >> a;
	for (size_t i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == 40)
		{
			cnt++;
		}
		else if (a[i] == 41)
		{
			cnt2++;
		}
	}
	if (cnt == cnt2)
	{
		cout << "YES";
	}
	else cout << "NO";
	return 0;
}
