//[기초-종합] 함께 문제 푸는 날
#include<stdio.h>

int main(void) {
	int day = 1;
	int a = 0, b = 0, c = 0;

	scanf("%d %d %d", &a, &b, &c);

	while (day % a != 0 || day % b != 0 || day % c != 0)
	{
		day++;
	}

	printf("%d", day);
}
