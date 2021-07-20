//[기초-논리연산] 둘 다 참일 경우만 참 출력하기
#include<stdio.h>

int main(void) {
	int num1, num2;

	scanf("%d %d", &num1, &num2);
	printf("%d", num1 && num2);
}
