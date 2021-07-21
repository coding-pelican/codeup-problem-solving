//[기초-2차원배열] 바둑알 십자 뒤집기
#include<stdio.h>

int main(void) {
	int grid[20][20] = { 0, };
	int n = 0, x = 0, y = 0;

	for (int row = 1; row <= 19; row++) {
		for (int col = 1; col <= 19; col++) {
			scanf("%d ", &grid[row][col]);
		}
	}

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		for (int j = 1; j <= 19; j++) {
			if (grid[x][j] == 0) grid[x][j] = 1;
			else grid[x][j] = 0;
		}
		for (int j = 1; j <= 19; j++) {
			if (grid[j][y] == 0) grid[j][y] = 1;
			else grid[j][y] = 0;
		}
	}

	for (int i = 1; i <= 19; i++) {
		for (int j = 1; j <= 19; j++) printf("%d ", grid[i][j]);
		printf("\n");
	}
}
