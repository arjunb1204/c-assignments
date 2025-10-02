#include<stdio.h>

void main(){
    int P, R;
    float T, I;
    printf("Enter the principle amount: ");
    scanf("%d", &P);

    printf("Enter the interest rate: ");
    scanf("%d", &R);

    printf("Enter the time period in years: ");
    scanf("%f", &T);

    I = P*R*T/100;

    printf("Simple interest is: %f", I);

}