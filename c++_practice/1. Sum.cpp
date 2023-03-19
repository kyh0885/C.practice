//포인트 만약 for문안에 i를 int i =0;으로 처음 초기화를 한 것이라면 마지막에 cout << i << "=";를
//쓸 수 없다 왜냐하면 지역변수이기 때문에 초기화가 되기 때문이다.
#include <iostream>

using namespace std;
int main() {

	int i, n, m;
	int sum = 0;

	cin >> n >> m;	
	for (i = n; i < m; i++)
	{
		cout << i << "+";
		sum += i;
	}
	cout << i << "=";
	cout << sum + i << endl;
	return 0;
}

