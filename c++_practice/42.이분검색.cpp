#include<stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <sstream>
#include <vector>
#include <algorithm>


using namespace std;

int main() 
{
    int a, b; 
    int cnt = 0;

    cin >> a;
    vector<int> v(a);
    cin >> b;

    for (size_t i = 0; i < a; i++)
    {
        cin >> v[i];
    }
    for (size_t i = 0; i < a; i++)
    {
        if (v[i] < b) cnt++;
    }

    cout << cnt+1 << endl;

    return 0;
}