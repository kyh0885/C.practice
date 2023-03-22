#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	char a[30];
	int cnt = 0;
	cin >> a;
	for (size_t i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == '(') cnt++;
		else if (a[i] == ')') cnt--;
		if (cnt < 0)break;
	}
	cout << cnt << "°³, " << endl;
	if (cnt == 0) cout << "YES";
	else cout << "NO";
	return 0;
}
