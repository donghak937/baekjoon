#include <stdio.h>


int main(void) {

	int size;
	int find_num;
	int a[100] = {0};
	int count = 0;
	scanf("%d", &size);
	for (int i = 0; i < size; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d",&find_num);

	for (int i = 0; i < size; i++) {
		if (find_num == a[i]) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}