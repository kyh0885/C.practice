//2023.02.08
//문제> 머쓱이는 행운의 숫자 7을 가장 좋아합니다.
// 정수 배열 array가 매개변수로 주어질 때, 
// 7이 총 몇 개 있는지 return 하도록 solution 함수를 완성해보세요.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int array[], size_t array_len) {
	int answer = 0;
	int i;

	for (i = 0; i < array_len; i++) //배열의 크기보다 작으면 중단
	{
		while (1) // while 참 계속돌림
		{
			if (array[i] < 0)
				break;
			int temp = array[i] % 10; //배열값에서 10으로 나눈 값이 7이면.
			if (temp == 7)
				answer++;
			array[i] /= 10; // 앞에 7이 있다면 계속 앞으로 계속 가서 7갯수셈
			// 예를들어, 1236479572가있다면 이번에는 이걸 세고 다음
			//다음에서는 10으로 나누어서 7의 갯수를 계속 셈
		}
	}return answer;
}