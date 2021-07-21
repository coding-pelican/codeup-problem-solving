//[기초-1차원배열] 이상한 출석 번호 부르기1
#include<stdio.h>

int main(void) {
	int n = 0, call = 0;
	int student[23] = { 0, };

	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &call);
		student[call - 1] = student[call - 1] + 1;
	}

	for (int i = 0; i <= 22; i++)
	{
		printf("%d ", student[i]);
	}
}
