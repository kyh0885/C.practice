#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	char data[50];
	int res=0;
	int i;
	int cnt = 0;

	cin >> data;

	for (i = 0; data[i] != '\0'; i++)
	{
		if (data[i] >= 48 && data[i] <= 57)
		{
			res = res * 10 + (data[i] - 48);
		}
	}
	//����� ������ ���� ������ 1���� �����ؾ���-> 0���� �ϸ� ����ó�� ������
	for (i = 1; i <= res; i++) 
	{
		if (res % i == 0)cnt++;
	}
	
	cout << res << "," << cnt << endl;

	return 0;
}

