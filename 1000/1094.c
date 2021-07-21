//[기초-1차원배열] 이상한 출석 번호 부르기2
#include<stdio.h>

int main(void) {
	int n = 0, call = 0;
	int student[10000] = { 0, };

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &student[i]);
	}

	for (int i = n - 1; i >= 0; i--)
	{
		printf("%d ", student[i]);
	}
}
