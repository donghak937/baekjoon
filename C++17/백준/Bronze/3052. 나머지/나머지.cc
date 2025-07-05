#include <stdio.h>

int main() {

	int a[10] = {0};
	int list[10] = { 0 };
	int check = 0;
	int count = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &list[i]);
	}

	for (int i = 0; i < 10; i++) {
		list[i] = list[i] % 42;
		a[i] = list[i];
		for (int j = 0; j < i; j++) {
			if (a[i] == list[j]) {
				check = 1;
				break;
			}
		}
		if (check == 1) {
			check = 0;
			continue;
		}
		else {
			count++;
			check = 0;
		}
	}
	printf("%d",count);
}