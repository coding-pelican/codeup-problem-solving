//[기초-출력변환] 16진 정수 1개 입력받아 8진수로 출력하기
#include<stdio.h>

int main(void) {
	int num = 0;
	scanf("%x", &num);
	printf("%o", num);
}