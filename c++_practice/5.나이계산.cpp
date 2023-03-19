//주민등록 번호를 atoi를하는 것이 핵심 포인트
#include <iostream>
#include<stdio.h>

using namespace std;
int main() {
	char a[20];
	int year, age;
	string sex;
	
	cin >> a;

	if (a[7] == '1')
	{
		age = 2019 - (1900 + (a[0] * 10 + a[1]));
		sex = "Male";
	}
	else if(a[7] == '2')
	{
		age = 2019 - (1900 + (a[0] * 10 + a[1]));
		sex = "Women";
	}
	else if (a[7] == '3')
	{
		age = 2019 - (2000 + (a[0] * 10 + a[1]));
		sex = "Male";
	}
	else if (a[7] == '4')
	{
		age = 2019 - (2000 + (a[0] * 10 + a[1]));
		sex = "Women";
	}

	cout << age << "," << sex << endl;
	return 0;
}
