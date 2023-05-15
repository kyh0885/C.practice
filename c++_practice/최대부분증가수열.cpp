#include <iostream>
#include <vector>

using namespace std;
int main()
{
	
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n,res =0;
	cin >> n;
	vector<int> arr(n + 1), dy(n + 1); // �⺻������ 0���� �ʱ�ȭ �ȴ�
	for (size_t i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	dy[1] = 1;
	for (size_t i = 2; i <= n; i++) //�ִ�κ� ���������� ������ 2�� for��
	{
		int max = 0;
		for (size_t j = i-1; j >=1; j--)
		{
			if ((arr[j] < arr[i]) && dy[j] > max)
			{
				max = dy[j];
			}
		}
		dy[i] = max + 1;
		if (dy[i] > res) res = dy[i];
	}
	cout << res;
	return 0;
}