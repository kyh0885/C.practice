#include<stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <sstream>
#include <vector>
#include <algorithm>


using namespace std;
int main() {
    int a, b = 1, cnt = 0, tmp, i;

    cin >> a;

    tmp = a;
    a--;

    while (a > 0) {
        b++;
        a = a - b;

        if (a % b == 0) {
            for (i = 1; i < b; i++)
                printf("%d + ", (a / b) + i);

            printf("%d = %d\n", (a / b) + i, tmp);
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}