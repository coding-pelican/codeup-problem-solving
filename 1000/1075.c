//[기초-반복실행구조] 정수 1개 입력받아 카운트다운 출력하기2
#include<stdio.h>

int main(void) {
	int cnt;

	scanf("%d", &cnt);

	for (int i = cnt - 1; i >= 0; i--)
	{
		printf("%d\n", i);
	}
}
