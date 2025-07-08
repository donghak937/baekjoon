#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char a[1000] = { 0 };
	char b[1000] = { 0 };
	int total = 0;
	int trys;
	int k = 0;
	int check = 0;
	scanf("%d", &trys);
	for (int i = 0; i < trys; i++) {
		scanf("%s", a);
		int size = strlen(a);
		for (int j = 0; j < size; j++) {
			if (j == 0) b[k] = a[j];
			else {
				if (a[j] != b[k]){
					for (int c = 0; c <= k; c++) {
						if (b[c] == a[j]) {
							check = 1;
							break;
						}
						else if (c == k) {
							k++;
							b[k] = a[j];
							break;
						}
					}
					
				}
			}
			if (check == 1) {
				check = 0;
				for (int c = 0; c <= k; c++) {
					b[c] = 0;
				}
				break;
			}
			else if (j == size - 1) {
				total++;
				check = 0;
				for (int c = 0; c <= k; c++) {
					b[c] = 0;
				}
			}
		}
	}
	printf("%d", total);
	
}
