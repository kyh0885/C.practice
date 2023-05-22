#include <iostream>

using namespace std;
// 첫째자리 1 -> 1900 년대 남자
//         2 -> 1900 년대 여자
//         3 -> 2000 년대 남자
//         4 -> 2000 년대 여자
int main()
{
	char data[100];
	char line;
	int i;
	int currentY = 2020;
	int ageYear;
	char gender;
	int sub = 0;


	cin >> data;

	if (data[7] == '1')
	{
		ageYear = currentY - (1900 + (data[0] * 10) + data[1]);
		gender = 'M';
	} else if (data[7] == '2')
	{
		ageYear = currentY - (1900 + (data[0] * 10) + data[1]);
		gender = 'W';
	} else if (data[7] == '3')
	{
		ageYear = currentY - (2000 + (data[0] * 10) + data[1]);
		gender = 'M';
	} else if (data[7] == '4')
	{
		ageYear = currentY - (2000 + (data[0] * 10) + data[1]);
		gender = 'W';
	}
	cout << ageYear <<" " << gender << endl;

	return 0;
}

