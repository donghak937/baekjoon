#include <stdio.h>

int main() {

	char a[1000] = { 0 };
	int i = 0, size;
	int subs[500] = {0};
	int count = 0;
	int total[500] = {0};
	float avg[500] = { 0 };
	scanf("%d",&size);
	

	for (i = 0; i < size; i++) {
		scanf("%d", &subs[i]);
		for (int j = 0; j < subs[i]; j++) {
			scanf("%d", &a[j]);
			total[i] += a[j];
		}

		avg[i] = (float)total[i] / (float)subs[i];

		for (int j = 0; j < subs[i]; j++) {
			if (a[j] > avg[i]) {
				count++;
			}
		}
		avg[i] = 100*(count / (float)subs[i]);

		count = 0;
	}

	for (i = 0; i < size; i++) {
		printf("%.3f%%\n",avg[i]);
	}

}
