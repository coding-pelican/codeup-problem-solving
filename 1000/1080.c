//[기초-종합] 언제까지 더해야 할까?
#include<stdio.h>

int main(void) {
	int num, i, sum = 0;

	scanf("%d", &num);

	for (i = 0; sum < num; i++)
		sum += i;

	printf("%d", i - 1);
}
