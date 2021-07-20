//[기초-산술연산] 정수 3개 입력받아 합과 평균 출력하기
#include<stdio.h>

int main(void) {
	long long int num1, num2, num3;

	scanf("%lld %lld %lld", &num1, &num2, &num3);
	printf("%lld\n", num1 + num2 + num3);
	printf("%.1lf\n", (double)(num1 + num2 + num3) / 3);
}
