#include <stdio.h>

int main() {
    int trys;
    int a, b;
    scanf("%d", &trys);

    for (int i = 0; i < trys; i++) {
        scanf("%d %d", &a,&b);
        printf("%d\n", a + b);
    }
    
}