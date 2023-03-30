#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sstream>

using namespace std;
int ch[60];
int ch2[60];
int main()
{
	char arr1[101];
	cin >> arr1;
	for (size_t i = 0; arr1[i] != '\0'; i++)
	{
		if (arr1[i] > 64 && arr1[i] < 91)
		{
			ch[arr1[i] - 64]++;
		}
		else
		{
			ch[arr1[i] - 70]++;
		}
	}
	cin >> arr1;
	for (size_t j = 0; arr1[j] != '\0'; j++)
	{
		if (arr1[j] > 64 && arr1[j] < 91)
		{
			ch2[arr1[j] - 64]++;
		}
		else
		{
			ch2[arr1[j] - 70]++;
		}
	}
	for (size_t i = 0; i <= 60; i++)
	{
		if (ch[i] != ch2[i]) {
			cout << "No" << endl;
			exit(0);
		}
		
	}
	cout << "Yes" << endl;
	
	return 0;
}
