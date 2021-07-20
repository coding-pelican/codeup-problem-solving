//[기초-입출력] 주민번호 입력받아 형태 바꿔 출력하기
#include<stdio.h>

int main(void) {
	int yymmdd, ghijklx;
	scanf("%d-%d", &yymmdd, &ghijklx);
	printf("%06d%07d", yymmdd, ghijklx);
}
