//진약수에서는 1이 무조건 포함 되기 때문에 1을 처음으로 시작한다는것을 전제하에 시작하면 된다
// 그렇다면 for문의 초기값을 2부터 시작하면 된다
#include <iostream>

using namespace std;
int main() {

	int i, n;
	int sum = 0;
	
	cin >> n;
	cout << 1;

	for (i = 2; i < n; i++) 
	{
		if (n % i == 0)
		{
			cout <<"+" << i;
			sum += i;
		}
	}
	cout << "=" << sum+1 << endl;
	return 0;
}

