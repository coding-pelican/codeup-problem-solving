//[기초-조건/선택실행구조] 월 입력받아 계절 출력하기
#include<stdio.h>

int main(void) {
	int month;

	scanf("%d", &month);

	switch (month)
	{
	case 3:
	case 4:
	case 5:
		printf("spring");
		break;
	case 6:
	case 7:
	case 8:
		printf("summer");
		break;
	case 9:
	case 10:
	case 11:
		printf("fall");
		break;
	default:
		printf("winter");
	}
}
