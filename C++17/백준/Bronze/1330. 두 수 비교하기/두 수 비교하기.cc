#include <stdio.h>

int main(){
    double a, b;
    
    scanf("%lf %lf",&a,&b);
    
    if (a > b){
        printf(">");
    }
    else if (a<b){
        printf("<");
    }
    else{
        printf("==");
    }
    
}