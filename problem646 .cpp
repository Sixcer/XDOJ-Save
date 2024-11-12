#include <stdio.h>

int change(char x) {
	if (x <= 'z' && x >= 'A')
		return x;
	else
		return 0;
}

void longest(char []);
void words(char []);
void bigest(char []);

int main(void) {
	char text[101] = {0};
	gets(text);
	words(text);
	bigest(text);
	putchar(' ');
	longest(text);
	return 0;
}

void longest(char text[]) {
	int i = 0, j = 0, l = 0, s = 0;
	for (i = 0; text[i] != 0; ++i) {
		if (change(text[i]) != 0) {
			++j;
			if (change(text[i + 1]) == 0) {
				if (j > l) {
					l = j;
					s = i - l + 1;
				}
				j = 0;
			}
		}
	}
	for (i = 0; i < l; ++i) {
		printf("%c", text[s]);
		++s;
	}
	return;
}

void words(char text[]) {
	int i = 0, k = 0;
	for (i = 0; text[i] != 0; ++i) {
		if (text[i] == ' ' && change(text[i + 1]) != 0 && change(text[i - 1]) != 0) {
			++k;
		}
	}
	printf("%d ", k + 1);
	return;
}

void bigest(char text[]) {
	int i, j = change(text[0]), k = 0;
	int a, b;
	for (i = 0; text[i] != 0; ++i) {
		if (text[i - 1] == ' ') {
			if (change(text[i]) > j) {
				j = change(text[i]);
				k = i;
			} else if (change(text[i]) == j) {
				a = k;
				b = i;
				while (change(text[a]) != 0 && change(text[b]) != 0) {
					if (change(text[a]) > change(text[b])) {
						break;
					}
					if (change(text[a]) < change(text[b])) {
						k = i;
						break;
					}
					++a;
					++b;
				}
			}
		}
	}
	a = 0;
	for (i = k; change(text[i]) != 0; ++i) {
		++a;
	}
	for (b = 0; b < a; b++) {
		printf("%c", text[k]);
		++k;
	}
	return;
}