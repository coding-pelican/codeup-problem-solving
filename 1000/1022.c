//[기초-입출력] 문장 1개 입력받아 그대로 출력하기
#include<stdio.h>
#define MAX_STR_SIZE 2000

int main(void) {
	char data[MAX_STR_SIZE +1];
	fgets(data, MAX_STR_SIZE, stdin);
	printf("%s", data);
}
