//[기초-종합] 3 6 9 게임의 왕이 되자!
#include<stdio.h>

int main(void) {
	int cnt;
	char x = 'X';

	scanf("%d", &cnt);

	for (int i = 1; i <= cnt; i++) {
		if (i % 3 == 0) {
			printf("%c ", x);
		}
		else
		{
			printf("%d ", i);
		}
	}
}
