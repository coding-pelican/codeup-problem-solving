//[기초-조건/선택실행구조] 정수 1개 입력받아 분석하기
#include<stdio.h>

int main(void) {
	int num;

	scanf("%d", &num);

	if (num != 0) {
		if (num > 0) {
			printf("plus\n");
		}
		else {
			printf("minus\n");
		}

		if (num % 2 == 0) {
			printf("even\n");
		}
		else {
			printf("odd\n");
		}
	}
	else {

	}
}
