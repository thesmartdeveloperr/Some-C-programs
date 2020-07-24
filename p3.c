#include<stdio.h>
#include<math.h>
int main()
{
    // program to find the real and imaginary roots of a given quadratic equation...
    int a,b,c;
    int d;
    int r1,r2;
    printf("Please Enter all the values(a,b,c): ");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    double sq=fabs(sqrt(d));
    if (d > 0){ 
        printf("roots are real and different \n"); 
        printf("%f\n%f",(double)(-b + sq)/(2*a) , (double)(-b - sq)/(2*a)); 
    } 
    else if (d == 0){ 
        printf("Roots are real and same \n"); 
        printf("%f",-(double)b / (2*a)); 
    } 
    else{ 
        printf("Roots are complex \n"); 
        printf("%f + i%f\n%f - i%f", -(double)b / (2*a),sq,-(double)b / (2*a), sq); 
    } 
    return 0;
}