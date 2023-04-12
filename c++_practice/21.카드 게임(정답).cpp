#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sstream>


using namespace std;
void shuffle(int* arr, int num);
int main(void)
{
	int num;
	int* arr;
	cin >> num;
	arr = (int*)malloc(sizeof(int) * num);
	for (size_t i = 1; i <= num; i++)
	{
		arr[i] = i + 1;
	}
	shuffle(arr, num);
	for (size_t i = 0; i < num; i++)
	{
		cout << arr[i];
	}

	free(arr);
	return 0;
}
void shuffle(int* arr, int num)
{
	srand(time(NULL));
	int temp;
	int rn;
	for (size_t i = 1; i <= num; i++)
	{
		rn = rand() % (num - i) + i;
		temp = arr[i];
		arr[i] = arr[rn];
		arr[rn] = temp;
	}
}