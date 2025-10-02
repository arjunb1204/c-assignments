#include<stdio.h>
#include<math.h>

void main(){

    float t, r;
    int P, A, n;

    printf("Enter the principle amount: ");
    scanf("%d", &P);

    printf("Enter the time period in years: ");
    scanf("%f", &t);

    printf("Enter the interest rate: ");
    scanf("%f", &r);

    printf("Enter the interest frequency per year: ");
    scanf("%d", &n);
    
    A = P*pow(1+r/n, n*t);

    printf("The final amount is: %d", A);

}

