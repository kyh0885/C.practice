#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main()
{
	int n ;
	int cnt = 0;
	int max;
	int m[50];
	int k[50];
	cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		cin >> m[i];
	}
	for (size_t i = 0; i < n; i++)
	{
		cin >> k[i];
	}

	for (size_t i = 0; i < n; i++)
	{
		if ((m[i] == 1) && (k[i] == 2))
			cout << "A" << endl;
		else if((m[i] == 1) && (k[i] == 3))
			cout << "B" << endl;
		else if ((m[i] == 2) && (k[i] == 1))
			cout << "A" << endl;
		else if ((m[i] == 2) && (k[i] == 3))
			cout << "B" << endl;
		else if ((m[i] == 3) && (k[i] == 1))
			cout << "B" << endl;
		else if ((m[i] == 3) && (k[i] == 2))
			cout << "A" << endl;
		else if(m[i]==k[i]) 
			cout << "D" << endl;
	}
	return 0;
}
