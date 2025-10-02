#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a>b)
    {
        printf("Greater number is %d", a);
    }
    else if (a==b)
    {
        printf("Both are equal!!");
    }
    else
    {
        printf("Greater number is %d", b);
    }
    
    return 0;
}