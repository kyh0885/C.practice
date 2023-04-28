#include <iostream>
#include <ctime>

using namespace std;

int n, a[101], tmp[101];


void mergeSort(int first, int last)
{
	int mid = (first + last) / 2;
	int p1, p2, p3;
	if (first < last)
	{
		mergeSort(first, mid);
		mergeSort(mid + 1, last);
		
		p1 = first;
		p2 = mid + 1;
		p3 = first;
		while (p1 <= mid && p2 <= last)
		{
			if (a[p1] < a[p2])
			{
				tmp[p3++] = a[p1++];
			}
			else tmp[p3++] = a[p2++];
		}
		while (p1 <= mid)
		{
			tmp[p3++] = a[p1++];
		}
		while (p2 <= last)
		{
			tmp[p3++] = a[p2++];
		}
		for (size_t i = first; i <= last; i++)
		{
			a[i] = tmp[i];
		}
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	cin >> n;
	for (size_t i = 1; i <= n; i++)
	{
		cin >> a[i]; // 입력받은 배열생성
	}
	mergeSort(1, n);

	for (size_t i = 1; i <= n; i++)
	{
		cout << a[i];
	}
	
	return 0;
}




