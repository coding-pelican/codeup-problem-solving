//[기초-반복실행구조] 정수 1개 입력받아 카운트다운 출력하기1
#include<stdio.h>

int main(void) {
	int cnt;

	scanf("%d", &cnt);

	while (cnt > 0)
	{
		printf("%d\n", cnt);
		cnt--;
	}
}
