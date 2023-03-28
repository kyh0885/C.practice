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
	for (size_t i = 2; i < x; i++) // i��x�� ������ ������ �������� 0���� false �� 
							 	   //������ ������ �۴ٶ�� �ε�ȣ�� Ȯ���ϰ� ������Ѵ�.
	{
		if (x % i == 0)
		{
			flag = false;
			break;
		}
	}
	return flag;
}