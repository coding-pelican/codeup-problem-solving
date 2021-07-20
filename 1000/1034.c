//[기초-출력변환] 8진 정수 1개 입력받아 10진수로 출력하기
#include<stdio.h>

int main(void) {
	int num = 0;
	scanf("%o", &num);
	printf("%d", num);
}