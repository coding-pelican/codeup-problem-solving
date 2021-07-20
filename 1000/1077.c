//[기초-반복실행구조] 정수 1개 입력받아 그 수까지 출력하기
#include<stdio.h>

int main(void) {
	int num;

	scanf("%d", &num);

	for (int i = 0; i <= num; i++) {
		printf("%d\n", i);
	}
}
