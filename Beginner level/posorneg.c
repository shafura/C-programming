#include <stdio.h>

int main (void)
{
	// your code goes here
	int n;
	printf("Enter one number:");
	scanf("%d",&n);
	{
	if(n>0)
	{
	printf("The number is positive");
	}
	else if(n<0)
	{
	printf("The number is negative");
	}
	else 
	{
	printf("The number is zero");
	}
	return 0;
}
}
