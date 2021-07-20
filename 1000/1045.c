//[기초-산술연산] 정수 2개 입력받아 자동 계산하기
#include<stdio.h>

int main(void) {
	long long int num1 = 0, num2 = 0;
	scanf("%lld %lld", &num1, &num2);
	printf("%lld\n", num1 + num2);
	printf("%lld\n", num1 - num2);
	printf("%lld\n", num1 * num2);
	printf("%lld\n", num1 / num2);
	printf("%lld\n", num1 % num2);
	printf("%.2f\n", (float)num1 / (float)num2);
}
