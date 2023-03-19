#include <iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
int main() {
	char a[100];
	char num[] = { 0, };

	cin >> a;
	
	for (size_t i = 0; i < strlen(a); i++)
	{
		if (a[i] > 48 && a[i] < 58)
		{
			num[i] = a[i];
		}
	}
	int num2 = atoi(num);
	int cnt = 0;
	for (size_t i = 1; i <= num2; i++)
	{
		if (num2 % i == 0) cnt++;
	}
	cout << cnt << endl;
}