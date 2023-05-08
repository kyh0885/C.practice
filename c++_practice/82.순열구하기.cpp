#include <stdio.h>
#include <iostream>

using namespace std;
int Data[15], check[15], result[100];
int a, b,cnt=0;
void DFS(int x) {
	if (x==b) {
		for (size_t i = 0; i < b; i++)
		{
			cout << result[i] <<" ";
		}
		cnt++;
		cout << "\n";
	}
	else {
		for (size_t i = 1; i <= a; i++)
		{
			if (check[i] == 0) {
				result[x] = Data[i];
				check[i] = 1;
				DFS(x + 1);
				check[i] = 0;
			}
		}
	}
}

int main() {
	
	cin >> a >> b;
	for (size_t i = 1; i <= a; i++) {
		cin >> Data[i]; // 4개의 값 입력
	}
	DFS(0);
	cout << cnt << endl;
	return 0;
}