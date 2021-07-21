//[기초-종합] 소리 파일 저장용량 계산하기
#include<stdio.h>

int main(void) {
	int h, b, c, s;
	double mb;

	scanf("%d %d %d %d", &h, &b, &c, &s);
	
	mb = (double)h * (double)b * (double)c * (double)s/(2<<22);
	printf("%.1lf MB", mb);
}
