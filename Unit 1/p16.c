#include<stdio.h>

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a>0)
    {
        printf("POSITIVE!!");
    }
    else if (a==0)
    {
        printf("ZERO!!");
    }
    else
    {
        printf("NEGATIVE!!");
    }
    
    return 0;
}