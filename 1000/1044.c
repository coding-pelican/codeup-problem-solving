//[기초-산술연산] 정수 1개 입력받아 1 더해 출력하기
#include<stdio.h>

int main(void) {
	long long num;
	scanf("%lld", &num);
	printf("%lld", ++num);
}
