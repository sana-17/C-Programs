//program to find out the factorial of a number using function
#include<stdio.h>
int factorial (int n);
int main ()
{
	int n;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	printf("The factorial of the number is %d", factorial(n));
	
	return 0;
	
}

int factorial (int n)
{
	if (n>0)
	return n*factorial(n-1);
	
	else
	
	return 1;
}




