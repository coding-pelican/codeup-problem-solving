//[기초-종합] 그림 파일 저장용량 계산하기
#include<stdio.h>

int main(void) {
	int w, h, b;
	double mb;

	scanf("%d %d %d", &w, &h, &b);
	mb = (double)w * (double)h * (double)b / (2 << 22);
	printf("%.2lf MB", mb);
}
