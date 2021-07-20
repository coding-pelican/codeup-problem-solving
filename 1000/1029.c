//[기초-데이터형] 실수 1개 입력받아 그대로 출력하기2
#include<stdio.h>

int main(void) {
	double num = 0;
	scanf("%lf", &num);
	printf("%.11lf", num);
}
