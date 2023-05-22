#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	char data[50];
	char finalData[50];
	int p=0;

	cin >> data;

	for (size_t i = 0; data[i] != '\0'; i++)
	{
		if (data[i] != ' ')
		{
			if (data[i] > 64 && data[i] < 91)
			{
				finalData[p++] = data[i] + 32;
			} 
			else 
			{
				finalData[p++] = data[i];
			}
		}
	}
	finalData[p] = '\0';
	cout << finalData << endl;

	return 0;
}

