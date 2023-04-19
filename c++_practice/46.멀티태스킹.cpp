#include<stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, pos = 0, cnt = 0;
    cin >> n;
    vector<int> v(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cin >> m;
    while (1)
    {

        if (m > 1)
        {
            for (size_t i = 0; i < n; i++)
            {
                if (v[i] > 0) 
                {
                    v[i]--;
                    m--;
                    cnt++;
                    if (m == 1) break;
                }
            }
        }
        else if (m == 1)
        {
            for (size_t i = 0; i < n; i++)
            {
                if (v[i] > 0)
                {
                    pos = i+1;
                    break;
                }
            }
        }
    }cout << pos << endl;
    
  
    return 0;
}

