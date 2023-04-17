#include<stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int Count(int len, int x[])
{
    int i, cnt = 1, pos = x[1];
    for (i = 2; i <= n; i++)
    {
        if (x[i]-pos >=len) // mid 보다 크면
        {
            cnt++;
            pos = x[i];
        }
    }
    return cnt;
}


int main()
{
    int m, rt, mid, cnt;
    int lt = 1;
    int res = 0;
    int pre = 0;
    cin >> n;
    int* x = new int[n + 1]; // 동적으로 잡아 줄 수도 있다 왜냐하면 문제에서 너무 높은 값을 요구하기 떄문이다.
    cin >> m; // 말의 마리 수
    for (size_t i = 0; i < n; i++) //배열의 형태로 만들어 줌
    {
        cin >> x[n];
    }
    sort(x+1,x+n+1); // 오름차순으로 정렬
    rt = x[n]; // 제일 마지막의 값
   
    while (lt<=rt)
    {   
       mid = (rt+lt) / 2;
       if (Count(mid, x) >= m)
       {
           res = mid;
           lt = mid + 1;
       }
       else rt = mid - 1;
       
    }
    cout << res << endl;
    delete[] x; // 위에서 동적으로 할당해주었기때문에 반드시 delete해줘야한다.
    return 0;
}