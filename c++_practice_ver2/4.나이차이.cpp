#include <iostream>

using namespace std;
int main() 
{
	int data[100];
	int i, n;
	int max = -2147000000;
	int min = 2147000000;
	int sub = 0;

	cin >> n;

	for (i = 1; i <= n; i++)
	{
		cin >> data[i];
	}
	for (size_t i = 1; i <=n; i++)
	{
		if (data[i] > max) max = data[i];
		if (data[i] < min) min = data[i];
	}
	sub = max - min;
	cout << sub << endl;

	return 0;
}

