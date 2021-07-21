//[기초-2차원배열] 성실한 개미
#include<stdio.h>

int main(void) {
	int grid[11][11] = { 0, };
	int x = 2, y = 2;

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			scanf(" %d", &grid[i][j]);
		}
	}


	while (1) {
		if (grid[x][y] == 2) {
			break;
		}
		else if (grid[x][y + 1] == 1) {
			if (grid[x + 1][y] == 1) {
				break;
			}
			grid[x][y] = 9;
			x++;
		}
		else {
			grid[x][y] = 9;
			y++;
		}
	}
	grid[x][y] = 9;

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) printf("%d ", grid[i][j]);
		printf("\n");
	}
}
