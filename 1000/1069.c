//[기초-조건/선택실행구조] 평가 입력받아 다르게 출력하기
#include<stdio.h>

int main(void) {
	char ch;

	scanf("%c", &ch);

	switch (ch)
	{
	case 'A':
		printf("best!!!");
		break;
	case 'B':
		printf("good!!");
		break;
	case 'C':
		printf("run!");
		break;
	case 'D':
		printf("slowly~");
		break;
	default:
		printf("what?");
	}
}
