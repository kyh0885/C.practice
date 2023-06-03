#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main()
{
	int a,b;
	char data[10];
	int sum;
	for (size_t i = 1; i <=4; i++)
	{
		cin >> data[i];
	}
	
	for (size_t i = 1; data[i] != '\0'; i++)
	{
		if (data[2] > 47 && data[2] < 58)
		{
			a = (data[2] - 48) * 12;
		}
		if (data[4] > 47 && data[4] < 58)
		{
			b = data[4] - 48;
		}

		if (data[2] > 58)
		{
			a = 12;
			b = data[3] - 48;
		}
		
	}
	
	sum = a + b;
	cout << sum << endl;

	return 0;
}