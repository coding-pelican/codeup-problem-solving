//[기초-논리연산] 하나라도 참이면 참 출력하기
#include<stdio.h>

int main(void) {
	int num1, num2;

	scanf("%d %d", &num1, &num2);
	printf("%d", num1 || num2);
}
