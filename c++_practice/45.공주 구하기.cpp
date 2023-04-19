#include<stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, pos = 0, cnt = 0, bp =0;
    cin >> n;
    vector<int> v(n+1);
    cin >> m;
    
    while (1)
    {
        pos++;
        if (pos > n)
        {
            pos = 1;
        }
        if (v[pos] == 0)
        {
            cnt++;
            if (cnt==m)
            {
                v[pos] = 1;
                cnt = 0;
                bp++;
            }
        }
        if (bp == n - 1)break;
    }
    for (size_t i = 1; i <=n; i++)
    {
        if (v[i] == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}

