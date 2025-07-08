#include <stdio.h>

int main() {

	char a[1000] = { 0 };
	int i = 0,j = 0, size;
	int count = 0;
	int total[500] = {0};
	int cons = 0;
	scanf("%d",&size);
	

	while (count != size) {
		scanf("%s", a);

		while(a[i] != '\0'){
			if (a[i] == 'O') {
				total[count] += 1 + cons;
				cons++;
			}
			else {
				cons = 0;
			}
			i++;
		}
		a[0] = '\0';
		cons = 0;
		i = 0;
		count++;
	}

	for (i = 0; i < size; i++) {
		printf("%d\n", total[i]);
	}
}
