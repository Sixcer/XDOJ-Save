#include <stdio.h>

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);
	int nums[n][m], elim[n][m];
	int i, j, k = 0;
	for (i = 0; i < n; ++i) {
		for (j = 0; j < m; ++j) {
			scanf("%d", &nums[i][j]);
			elim[i][j] = 0;
		}
	}

	int a;
	for (i = 0; i < n; ++i) {
		for (j = 0; j < m; ++j) {
			if (nums[i][j] == nums[i][j + 1] && j != m - 1) {//这部分没有判断是最后一项只有80分
				++k;
			} else {
				++k;
				if (k > 2) {
					for (a = j; k > 0; --k, --a) {
						elim[i][a] = 1;
					}
				}
				k = 0;
			}
		}
	}
	for (i = 0; i < n; ++i) {
		for (j = 0; j < m; ++j) {
			if (nums[j][i] == nums[j + 1][i]) {//这里不判断也有100分
				++k;
			} else {
				++k;
				if (k > 2) {
					for (a = j; k > 0; --k, --a) {
						elim[a][i] = 1;
					}
				}
				k = 0;
			}
		}
	}

	for (i = 0; i < n; ++i) {
		for (j = 0; j < m; ++j) {
			if (elim[i][j] == 1) {
				nums[i][j] = 0;
			}
		}
	}

	for (i = 0; i < n; ++i) {
		for (j = 0; j < m; ++j) {
			printf("%d ", nums[i][j]);
		}
		putchar('\n');
	}
}
