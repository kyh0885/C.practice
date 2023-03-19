#include <iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
int main() {
	char a[100];
	int res = 0, cnt = 0, i;

	cin >> a;

	for (size_t i = 0; a[i]!='\0'; i++)
	{
		if (a[i] >= 48 && a[i] <= 57)
		{
			res = res * 10 + (a[i] - 48);
		}
	}
	for (size_t i = 1; i <= res; i++)
	{
		if (res % i == 0) cnt++;
	}
	cout << res << endl;
	cout << cnt << endl;

	return 0;	
}