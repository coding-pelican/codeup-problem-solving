//[기초-반복실행구조] 0 입력될 때까지 무한 출력하기2
#include<stdio.h>

int main(void) {
	int n;

	scanf("%d", &n);

	while (n != 0)
	{
		printf("%d\n", n);
		scanf("%d", &n);
	}
}
