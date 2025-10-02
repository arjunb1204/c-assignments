#include<stdio.h>

void main(){
    float f, c;
    printf("Enter degree celsius: ");
    scanf("%f", &c);

    float farenheit = (c*9/5)+32;

    printf("Degree farenheit is: %f", farenheit);
}