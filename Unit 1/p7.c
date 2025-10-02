#include<stdio.h>

void main(){
    int a = 10;
    int b = 30;
    int temp;
    temp = a;

    a = b;
    b = temp;

    printf("%d %d", a,b);
    
    
}