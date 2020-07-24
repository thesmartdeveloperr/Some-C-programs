#include<stdio.h>
int main()
{
    // program to print the grade of the student when marks are entered...
    int marks;
    printf("Enter the marks obtained by the student: ");
    scanf("%d",&marks);
    if(marks>90&&marks<=100)
    printf("Congrats, you have A grade!");
    else if(marks>=70&&marks<=90)
    printf("Congrats, you have B grade");
    else if(marks>=50&&marks<70)
    printf("Work Hard, you have C grade");
    else if(marks>=40&&marks<50)
    printf("You are just pass with grade D");
    else if(marks<40)
    printf("You are failed!(GRADE F)");
    return 0;
}