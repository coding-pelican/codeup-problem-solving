//[기초-반복실행구조] 문자 1개 입력받아 알파벳 출력하기
#include<stdio.h>

int main(void) {
	char ch, t = 'a';

	scanf("%c", &ch);

	do
	{
		printf("%c ", t);
		t += 1;
	} while (t <= ch);
}
