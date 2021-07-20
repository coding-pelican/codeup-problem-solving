//[기초-반복실행구조] 정수 입력받아 계속 출력하기
#include<stdio.h>

int main(void) {
	int cnt, n;

	scanf("%d", &cnt);
reload:
	scanf("%d", &n);
	printf("%d\n", n);

	if (--cnt != 0) {
		goto reload;
	}
}
