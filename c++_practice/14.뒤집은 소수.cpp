#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

using namespace std;
int reverse(int x);
bool isPrime(int x);
int main()
{
	int i, n;
	int num,tmp;
	cin >> n;
	for (size_t i = 0; i <n; i++)
	{
		cin >> num;
		tmp = reverse(num);
		if (isPrime(tmp)) cout << tmp << endl;
	}
	return 0;
}
int reverse(int x)
{
	int res = 0;
	int tmp;
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
	if (x == 1) return false;
	for (size_t i = 2; i < x; i++) // i와x가 같으면 무조건 나머지는 0으로 false 가 
							 	   //나오기 때문에 작다라는 부등호를 확실하게 해줘야한다.
	{
		if (x % i == 0)
		{
			flag = false;
			break;
		}
	}
	return flag;
}