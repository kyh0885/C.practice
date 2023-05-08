#include <stdio.h>
#include <iostream>

using namespace std;
int date[15], cost[15], check[15];
int a, Max = -2147000000;
void DFS(int x, int sum) {
	if (x==a+1) {
		if (sum > Max) {
			Max = sum;
		}
	}
	else {
		if (x + date[x] <= a + 1) {
			DFS(x + date[x], sum + cost[x]);
		}
		DFS(x + 1, sum);
	}
}

int main() {

	cin >> a;
	for (size_t i = 1; i <= a; i++) {
		cin >> date[i] >> cost[i]; // 4개의 값 입력
	}
	DFS(1,0);
	cout << Max << endl;
	return 0;
}