//[기초-논리연산] 참/거짓이 서로 다를 때에만 참 출력하기
#include<stdio.h>

int main(void) {
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d", (a && !b) || (!a && b));	//XOR(^, 배타적 논리합)연산
}
