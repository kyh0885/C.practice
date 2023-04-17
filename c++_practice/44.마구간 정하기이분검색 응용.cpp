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
        if (x[i]-pos >=len) // mid ���� ũ��
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
    int* x = new int[n + 1]; // �������� ��� �� ���� �ִ� �ֳ��ϸ� �������� �ʹ� ���� ���� �䱸�ϱ� �����̴�.
    cin >> m; // ���� ���� ��
    for (size_t i = 0; i < n; i++) //�迭�� ���·� ����� ��
    {
        cin >> x[n];
    }
    sort(x+1,x+n+1); // ������������ ����
    rt = x[n]; // ���� �������� ��
   
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
    delete[] x; // ������ �������� �Ҵ����־��⶧���� �ݵ�� delete������Ѵ�.
    return 0;
}