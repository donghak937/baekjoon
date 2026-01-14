#include <stdio.h>
#include <string.h>

int main() {
	char a[1000002] = {0};
	fgets(a, 1000002, stdin);
	int count = 0;
	int check = 0;
	int size = strlen(a);
	a[size -  1] = '\0';
	for (int i = 0; i < size; i++) {
		if ((a[i] != ' ' && a[i + 1] == ' ') || (a[i] != '\0' && a[i] != ' ' && a[i + 1] == '\0')) {
			count++;
		}
	}
	printf("%d", count);
}