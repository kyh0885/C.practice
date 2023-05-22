#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	char data[50];
	int cnt = 0;
	int cnt2 = 0;

	cin >> data;

	for (size_t i = 0; data[i] != '\0'; i++)
	{
		if (data[i] == 40) cnt++;
		else if (data[i] == 41) cnt2++;
	}
	if (cnt == cnt2) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}

