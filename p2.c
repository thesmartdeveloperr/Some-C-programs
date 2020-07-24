#include<stdio.h>
int main()
{
    // program for printing the day name of the week from the day number...
    int n;
    printf("enter number of the day:");
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("It is Monday");
            break;
        case 2:
            printf("It is Tuesday");
            break;
        case 3:
            printf("It is Wednesday");
            break;
        case 4:
            printf("It is Thursday");
            break;
        case 5:
            printf("It is Friday");
            break;
        case 6:
            printf("It is Saturday");
            break;
        case 7:
            printf("It is Sunday");
            break;
        default:
            printf("You have entered a wrong number!");
    }
    return 0;
}