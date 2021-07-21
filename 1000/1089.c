//[기초-종합] 수 나열하기1
#include<stdio.h>

int main(void) {
	//a[n] = a + (n-1)d
	int a = 0, d = 0, n = 0;

	scanf("%d %d %d", &a, &d, &n);

	printf("%d", a + (n - 1) * d);
}
