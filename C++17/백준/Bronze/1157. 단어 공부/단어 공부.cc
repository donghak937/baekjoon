#include <stdio.h>
#include <string.h>

int main() {
	char a[1000000] = {0};
	int b[26] = { 0 };
	int max = 0;
	char index;
	scanf("%s", a);
	int size = strlen(a);
	for (int i = 0; i < size; i++) {
		if (a[i] >= 'a') {
			b[a[i] - 'a']++;
		}
		else{
			b[a[i] - 'A']++;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (b[i] > max) {
			max = b[i];
			index = i + 'A';
		}
		else if (b[i] == max) {
			index = '?';
		}
	}
	printf("%c",index);
}