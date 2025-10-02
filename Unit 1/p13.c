#include<stdio.h>
#include<math.h>


int main(){
    int a,b,c;
    double D;

    printf("Enter the coefficients of ax2+bx+c, i.e a,b and c respectively: ");
    scanf("%d %d %d", &a,&b,&c);

    D = (b*b)-4*a*c;
    if(D>0){
        double r1 = (-b+sqrt(D))/(2*a);
        double r2 = (-b-sqrt(D))/(2*a);

        printf("The two distinct roots are: %lf %lf", r1, r2);
    }
    else if (D==0)
    {
        float r3 = (-b)/(2*a);

        printf("The single root is: %f", r3);
    }
    else
    {
        printf("No real roots!!");
    }
   
    return 0;
}