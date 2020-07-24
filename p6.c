#include<stdio.h>
int main()
{
    // program to sum all the positive nubmers entered by the user until he/she enters 0(using goto statement)...
    int sum=0;
    int val;
        m:
        printf("\nEnter the value: ");
        scanf("%d",&val);
        if(val>0){
            sum+=val;
            goto m;
        }
        printf("the required sum is: %d",sum);
        return 0;
}