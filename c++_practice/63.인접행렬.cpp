#include <iostream>
#include <ctime>
#include <vector>

using namespace std;


int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, m; //2차원 배열 선언
	vector<vector<int>> v;
	vector <int> com;
	int a, b, c;
	int map[21][21];

	cin >> n >> m;


	for (size_t i = 1; i <= m; i++)
	{
		cin >> a >> b >> c;
		map[a][b] = c;
		
	}

	for (size_t i = 1; i <= n; i++)
	{
		for (size_t j = 1; j <=n; j++)
		{
			cout << map[i][j];
		}
		cout << "\n";
	}
	

	return 0;
}




