#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int a;
	
	cin >> a;
	for (size_t i = 1; i <= a; i++) 
	{
		int cnt = 0; //������ cnt�� ���ؾ� �ϹǷ� ���⼭ �ݵ�� �ʱ�ȭ ������Ѵ�.
		for (size_t j = 1; j <= i; j++)
		{
			if (i % j == 0) cnt++;
		}cout << cnt << " ";
	}
	return 0;
}
