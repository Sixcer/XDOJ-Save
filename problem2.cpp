#include <stdio.h>

int main(void) {
	int a, b, c, d = -1, e;
	scanf("%d", &a);
	e = 0;
	for (b = 0; b < a; b++) {
		scanf("%d", &c);
		if (c != d) {
			e++;
		}
		d = c;
	}
	printf("%d", e);
	return 0;
}