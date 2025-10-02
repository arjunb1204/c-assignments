#include<stdio.h>

void main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 1; i < n+1; i++)
    {
        printf("%d\n", i);
    }
    
}