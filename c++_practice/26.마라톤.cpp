#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main()
{
	int n;
	int cnt = 0;
	int temp;
	int max = -27000000;
	int score_Data[50];
	int win_Data[50];
	cin >> n;
	// 등수를 입력받음
	for (size_t i = 0; i < n; i++)
	{
		cin >> score_Data[i];
	}
	// 비교 시작
	for (size_t i = 0; i < n; i++)
	{	
		for (size_t j = i; j >= 0; j--)
		{
			if (score_Data[j] >= score_Data[i])cnt++;
			win_Data[j] = cnt;
		}
	}
	cout << win_Data << endl;
	
	

	return 0;
}
