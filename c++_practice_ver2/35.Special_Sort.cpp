#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	int cnt = 0;
	cin >> n;
	vector <int> data(n + 1); 
	vector <int> data2(n + 1); //최종결과 대입

	for (size_t i = 1; i <= n; i++)
	{
		cin >> data[i];
	}
	for (size_t i = 1; i <=n; i++)
	{	
		cnt = 0;
		for (size_t j = 1; j <=n; j++)
		{
			if ((data[i] < 0) && (data[j]<0))
			{
				if (data[i] < data[j])cnt++;
			}
			if (data[i] > 0)
			{
				if (data[i] > data[j]) cnt++;
			}
		}
		data2[cnt + 1] = data[i];
		
	}
	for (size_t i = 1; i <=n; i++)
	{
		cout << data2[i] << " ";
	}
	
	return 0;
}