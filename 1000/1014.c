//[기초-입출력] 문자 2개 입력받아 순서 바꿔 출력하기
#include<stdio.h>

int main(void) {
	char ch1, ch2;
	scanf("%c %c", &ch1, &ch2);
	printf("%c %c", ch2, ch1);
}
