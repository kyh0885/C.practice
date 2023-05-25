#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

using namespace std;
// 1:가위, 2:바위, 3:보

int main()
{
	int data[100];
	int data2[100];
	int n;
	int cnt = 0;

	cin >> n;

	for (size_t i = 1; i <= n; i++)
	{
		cin >> data[i]; //A
	}
	for (size_t i = 1; i <= n; i++)
	{
		cin >> data2[i]; //B
	}

	for (size_t i = 1; i <=n; i++)
	{
		if (data[i]==1 && data2[i]==2) cout << "B" << endl;
		else if (data[i] == 1 && data2[i] == 3) cout << "A" << endl;
		else if (data[i] == 2 && data2[i] == 1) cout << "A" << endl;
		else if (data[i] == 2 && data2[i] == 3) cout << "B" << endl;
		else if (data[i] == 3 && data2[i] == 1) cout << "B" << endl;
		else if (data[i] == 3 && data2[i] == 2) cout << "A" << endl;
		else if (data[i] == data2[i]) cout << "D" << endl;
	}

	return 0;
}