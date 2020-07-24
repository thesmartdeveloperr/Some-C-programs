#include<stdio.h>
int main()
{
    // program to print the name of the week day when number is given using if else...
    int n;
    printf("Enter number of the day:");
    scanf("%d",&n);
    if(n==1)
    printf("It is Monday");
    else if(n==2)
    printf("It is Tuesday");
    else if(n==3)
    printf("It is Wednesday");
    else if(n==4)
    printf("It is Thursday");
    else if(n==5)
    printf("It is Friday");
    else if(n==6)
    printf("It is Saturday");
    else if(n==7)
    printf("It is Sunday");
    return 0;
}