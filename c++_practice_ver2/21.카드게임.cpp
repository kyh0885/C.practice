#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main()
{
	int data[100];
	int data2[100];
	int score = 0;
	int score2 = 0;
	int max = -2147000000;

	for (size_t i = 1; i <= 10; i++)
	{
		cin >> data[i]; //A
	}
	for (size_t i = 1; i <= 10; i++)
	{
		cin >> data2[i]; //B
	}

	for (size_t i = 1; i <= 10; i++)
	{
		if (data[i] > data2[i]) score += 3;
		else if (data[i] < data2[i]) score2 += 3;
		else if (data[i] == data2[i])
		{
			score += 1;
			score2 += 1;
		}
	}
	
	cout << score << " " << score2 << endl;
	if (score > score2) cout << "A" << endl;
	else if (score < score2) cout << "B" << endl;
	
	return 0;
}