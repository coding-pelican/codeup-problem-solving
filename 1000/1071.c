//[기초-조건/선택실행구조] 평가 입력받아 다르게 출력하기
#include<stdio.h>

int main(void) {
	int n;

reload:
	scanf("%d", &n);
	if (n != 0) {
		printf("%d\n", n);
		goto reload;
	}
}
