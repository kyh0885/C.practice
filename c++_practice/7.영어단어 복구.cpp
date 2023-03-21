#include <iostream>
#include<stdio.h>
#include <stdlib.h>

using namespace std;

int main() 
{
	char a[101];
	char b[101];
	int p; // 옮겨 담을 곳이 필요하다.
	cin >> a;
	for (size_t i = 0; a[i] != '\0'; i++)
	{
		if (a[i] != ' ')
		{
			if (a[i] >= 65 && a[i] <= 90)
			{
				b[p++] = a[i] + 32;
			}else b[p++] = a[i];
		}
	}
	b[p] = '\0';
	cout << b << endl;
	
	return 0;
}
