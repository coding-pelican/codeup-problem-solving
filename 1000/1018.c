//[기초-입출력] 시간 입력받아 그대로 출력하기
#include<stdio.h>

int main(void) {
	int h, m;
	scanf("%d:%d", &h, &m);
	printf("%d:%d", h, m);
}
