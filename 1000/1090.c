//[기초-종합] 수 나열하기2
#include<stdio.h>

int main(void) {
	//a[n] = a * (r^(n-1))
	int a = 0, r = 0, n = 0;
	long long pow = 1;

	scanf("%d %d %d", &a, &r, &n);

	for (int i = 1; i < n; i++) {
		pow = pow * r;
	}
	printf("%lld", a * pow);
}
