//[기초-종합] 3의 배수는 통과?
#include<stdio.h>

int main(void) {
	int n = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (i % 3 != 0) {

			printf("%d ", i);
		}
	}
}
