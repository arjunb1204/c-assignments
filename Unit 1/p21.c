#include<stdio.h>

void main(){
    int n;
    unsigned long long fact = 1;
    printf("Enter the number: ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("The factorial is: %llu", fact);
    
    
}
