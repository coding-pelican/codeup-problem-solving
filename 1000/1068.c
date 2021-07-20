//[기초-조건/선택실행구조] 정수 1개 입력받아 평가 출력하기
#include<stdio.h>

int main(void) {
	int num;

	scanf("%d", &num);

	if (num >= 90) printf("A");
	else if (num >= 70) printf("B");
	else if (num >= 40) printf("C");
	else printf("D");
}
