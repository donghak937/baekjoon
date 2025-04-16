#include <stdio.h>

int main() {
	long long int a;
	long long int i = 1;
	long long int plus = 0;
	long long int count = 1;
	scanf("%lld",&a);
	while (i < a) {
		plus += 6;
		i += plus;
		count++;
	}
	printf("%lld", count);
}
