//[기초-입출력] 단어 1개 입력받아 나누어 출력하기
#include<stdio.h>

int main(void) {
	char d[20];
	scanf("%s", d);
	for (int i = 0; d[i] != '\0'; i++)
	{
		printf("\'%c\'\n", d[i]);
	}
}
