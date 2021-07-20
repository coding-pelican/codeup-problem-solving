//[기초-입출력] 정수 1개 입력받아 나누어 출력하기
#include<stdio.h>

int main(void) {
	char num[6];
	int size[5] = { 10000,1000,100,10,1 };

	scanf("%s", num);

	for (int i = 0; num[i] != '\0'; i++)
	{
		printf("[%d]\n", size[i] * (num[i] - 48));
	}
}
