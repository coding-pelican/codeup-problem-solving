//[기초-입출력] 실수 입력받아 둘째 자리까지 출력하기
#include<stdio.h>

int main(void) {
	float num;
	scanf("%f", &num);
	printf("%.2f", num);
}
