#include <stdio.h> 
int main() 
{ 
	// program for finding the sum of n natural numbers using goto statement...
	int n;
	int sum=0;
	int x=0;
	printf("Enter n:");
	scanf("%d",&n);
	m:
	if(x<=n){
	    sum+=x;
	    x++;
	    goto m;
	}
	printf("The sum of first n natural numbers is: %d",sum);
	return 0; 
} 
