#include <iostream>
#include <vector>

using namespace std;
int main()
{

	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, cnt = 0;
	int dy[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cin >> n;
	vector<int> arr(n + 1); // 기본적으로 0으로 초기화 된다
	for (size_t i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}

	for (size_t i = 2; i <= n; i++) //최대부분 증가수열은 무조건 2중 for문
	{
		for (size_t j = i - 1; j >= 1; j--)
		{
			if ((arr[j] < arr[i]) && arr[i] == dy[j])
			{
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}