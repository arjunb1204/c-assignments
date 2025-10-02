#include<stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 2; i*i <= n; i++)
    {
        if (n%i==0)
        {
            printf("NOT A PRIME!!");
            return 0;
        }
        
    }
    
    printf("IT IS A PRIME!!");
    
}
