#include<stdio.h>

void main(){
    int len, brd;
    printf("Enter the length: ");
    scanf("%d", &len);

    printf("Enter the breadth: ");
    scanf("%d", &brd);

    int prm = 2*(len+brd), area = len*brd;
    printf("The area is: %d\n", area);
    printf("The perimeter is: %d", prm);
}
