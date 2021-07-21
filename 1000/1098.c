//[기초-2차원배열] 설탕과자 뽑기
#include<stdio.h>

int main(void) {
	int grid[100][100] = { 0, };
	int h, w, n, l, d, x, y;

	scanf("%d %d", &h, &w);
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d %d %d %d", &l, &d, &x, &y);//d = 0 : 가로, d = 1 : 세로

		if (d == 0) {
			for (int i = 0; i < l; i++) grid[x][y+i] = 1;
		}
		else {
			for (int i = 0; i < l; i++) grid[x+i][y] = 1;
		}
	}

	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) printf("%d ", grid[i][j]);
		printf("\n");
	}
}
