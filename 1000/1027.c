//[기초-입출력] 년월일 입력 받아 형식 바꿔 출력하기
#include<stdio.h>

int main(void) {
	int d, m, y;
	scanf("%d.%d.%d", &y, &m, &d);
	printf("%02d-%02d-%04d", d, m, y);
}
