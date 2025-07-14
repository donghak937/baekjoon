#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int sectocnt(char a);
int main() {
	char a[101] = { 0 };
	int total = 0;
	scanf("%s",a);
	int size = strlen(a);

	for (int i = 0; i < size; i++) {
		if (a[i] == 'c' && a[i + 1] == '=') {
			total++;
			i++;
		}
		else if (a[i] == 'c' && a[i + 1] == '-') {
			total++;
			i++;
		}
		else if (a[i] == 'd' && a[i + 1] == 'z' && a[i + 2] == '=') {
			total++;
			i += 2;
		}
		else if (a[i] == 'd' && a[i + 1] == '-') {
			total++;
			i++;
		}
		else if (a[i] == 'l' && a[i + 1] == 'j') {
			total++;
			i++;
		}
		else if (a[i] == 'n' && a[i + 1] == 'j') {
			total++;
			i++;
		}
		else if (a[i] == 's' && a[i + 1] == '=') {
			total++;
			i++;
		}
		else if (a[i] == 'z' && a[i + 1] == '=') {
			total++;
			i++;
		}
		else {
			total++;
		}
		
	}
	printf("%d", total);
}