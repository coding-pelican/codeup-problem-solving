//[기초-논리연산] 참/거짓이 서로 같을 때에만 참 출력하기
#include<stdio.h>

int main(void) {
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d", a == b);	//EQV(동치,  배타적 부정 논리합 or 배타적 논리곱)연산
}
