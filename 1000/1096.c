//[기초-2차원배열] 바둑판에 흰 돌 놓기
#include<stdio.h>

int main(void) {
	int grid[20][20] = { 0, };
	int n = 0, x = 0, y = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		grid[x][y] = 1;
	}

	for (int i = 1; i <= 19; i++)
	{
		for (int j = 1; j <= 19; j++)
		{
			printf("%d ", grid[i][j]);
		}
		printf("\n");
	}
}
