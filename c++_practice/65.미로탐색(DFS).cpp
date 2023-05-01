#include <iostream>
#include <ctime>


using namespace std;
// 입력에는 점의 갯수와 이어진 줄의 갯수 
// 출력에는 1에서 5로 갯수가 몇개인지??
// 2차원배열을 선언하여서 이중연결 리스트로 풀면 된다

int map[100][100];
int com[100][100];
int cnt = 0;
int dx[4] = { 1, -1, 0, 0}; //0~3까지-> 좌우
int dy[4] = { 0, 0, 1, -1}; // 상하


void DFS(int x, int y)
{
	if (x > 7 || y > 7) return;
	if (x == 7 && y == 7) cnt++;
	
	else {
		for (size_t i = 0; i < 4; i++)
		{
			int rx = x + dx[i];
			int ry = y + dy[i];
			if (rx < 1 || rx>7 || ry < 1 || ry>7) continue;
			if (map[rx][ry] == 0 && com[rx][ry] == 0) {
				com[rx][ry] == 1;
				DFS(rx, ry);
				com[rx][ry] == 0;
			}
		}
		
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	for (size_t i = 1; i <= 7; i++)
	{
		for (size_t j = 1; j <= 7; j++)
		{
			cin >> map[i][j];
		}
	}

	com[1][1] = 1;
	DFS(1,1);

	cout << cnt << endl;

	return 0;
}




