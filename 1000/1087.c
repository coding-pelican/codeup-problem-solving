//[기초-종합] 여기까지! 이제 그만~
#include<stdio.h>

int main(void) {
	int n = 0, sum = 0;

	scanf("%d", &n);

	for (int i = 1; sum < n; i++) {
		sum += i;
	}

	printf("%d", sum);
}
