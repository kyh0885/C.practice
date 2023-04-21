#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>


using namespace std;
int stack[100];
int top = -1;

void push(int data)
{
	stack[++top] = data;
}
int pop()
{
	return stack[top--];
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, m, num, num2;
	cin >> n >> m;
	
	char str[20] = "0123456789ABCDEF";

	while (n > 0) 
	{
		push(n % m);
		n = n / m;
	}
	while (top != -1) // stack 이 공백상태이면 top = -1
	{
		cout << str[pop()];

	}
	
	return 0;
}




