//[기초-1차원배열] 이상한 출석 번호 부르기3
#include<stdio.h>

int main(void) {
	int n = 0, min = 0;
	int student[10000] = { 0, };

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &student[i]);
		if (i == 0 || min > student[i]) {
			min = student[i];
		}
	}

	printf("%d", min);
}
