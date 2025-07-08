#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int sectocnt(char a);
int main() {
	char a[1000000] = { 0 };
	int total = 0;
	scanf("%s",a);
	int size = strlen(a);
	for (int i = 0; i < size; i++) {
		total += sectocnt(a[i]);
	}
	printf("%d", total);
	
}
int sectocnt(char a) {
	if (a >= 'A' && a <= 'C') return 3;
	if (a >= 'D' && a <= 'F') return 4;
	if (a >= 'G' && a <= 'I') return 5;
	if (a >= 'J' && a <= 'L') return 6;
	if (a >= 'M' && a <= 'O') return 7;
	if (a >= 'P' && a <= 'S') return 8;
	if (a >= 'T' && a <= 'V') return 9;
	if (a >= 'W' && a <= 'Z') return 10;
}