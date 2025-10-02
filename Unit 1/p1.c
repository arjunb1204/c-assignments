#include<stdio.h>

int main(){\
    char name[50];
    char rollno[50];
    char branch[10];
    printf("Enter your name: ");
    scanf(" %[^\n]", name);

    printf("Enter your roll number: ");
    scanf(" %[^\n]", rollno);

    printf("Enter your branch: ");
    scanf(" %[^\n]", branch);

    printf("Your are %s with roll number %s of branch %s", name,rollno,branch);
    return 0;
}