#include<stdio.h>

int main(){
    int n, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    while (n!=0)
    {
        int ldigit = n%10;
        sum = sum + ldigit;
        n = n/10;
    }
    
    printf("The sum is: %d", sum);
    
}