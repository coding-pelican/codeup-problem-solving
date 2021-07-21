//[기초-종합] 수 나열하기3
#include<stdio.h>

long long a, m, d, n;
long long func(long long x);

int main(void) {
	/*
		도출과정
		a[2] = a[1] * -2 + 1 = 1 * -2 + 1 = -1
		a[3] = a[2] * -2 + 1 = -1 * -2 + 1 = 3
		∴ a[n] = a[n-1] * -2 + 1
		∴ a[n] = a[n-1] * m + d
	*/

	scanf("%lld %lld %lld %lld", &a, &m, &d, &n);

	printf("%lld", func(n));
}

long long func(long long x) {

	if (x == 1) {
		return 1;
	}
	else if (x == 2) {
		return a * m + d;
	}
	else
	{
		return func(x - 1) * m + d;
	}
}
