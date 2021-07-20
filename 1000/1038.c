//[기초-산술연산] 정수 2개 입력받아 합 출력하기1
#include<stdio.h>

int main(void) {
	long long num1, num2;
	scanf("%lld %lld", &num1, &num2);
	printf("%lld", num1 + num2);
}
