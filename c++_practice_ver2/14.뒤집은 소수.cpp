#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

using namespace std;
int reverse(int x);
bool isPrime(int x);
int main()
{
	int n;
	int data[100];
	int num;
	int res;
	cin >> n;
	for (size_t i = 1; i <= n; i++)
	{
		cin >> data[i];
	}
	for (size_t i = 1; i <=n; i++)
	{
		num = reverse(data[i]);
		res = isPrime(num);
		if (res == true)
		{
			cout << num;
		}
	}

	return 0;
}
int reverse(int x) 
{
	int num, res=0,tmp;
	while (x > 0)
	{
		tmp = x % 10;
		res = res * 10 + tmp;
		x = x / 10;
	}
	return res;
}
bool isPrime(int x)
{
	bool flag = true;
	for (size_t i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			flag = false;
			return flag;
		}
	}
	
	return flag;
}
