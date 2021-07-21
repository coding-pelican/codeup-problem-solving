//[기초-종합] 16진수 구구단?
#include<stdio.h>

int main(void) {
	int col;
	const int row = 16;

	scanf("%X", &col);

	for (int i = 1; i < row; i++) {
		printf("%X*%X=%X\n", col, i, col * i);
	}
}
