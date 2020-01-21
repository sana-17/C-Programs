//program to find out the position of a given number in an array
#include<stdio.h>
int main ()
{
	int x[100], i,a,n;
	
	printf("Enter size of array=");
	scanf("%d",&a);
	
	printf("Insert %d elements in array=\n",a);
	for (i=0;i<a;i++)
	{
		scanf("%d", &x[i]);
	}
	
	printf ("Enter the element to be searched=");
	scanf("%d",&n);
	
	i=0;
	while (i<a && n!=x[i])
	{
		i++;
	}
		if (i<a)
	{
		printf("Required number is at position =%d", i+1);
	}
	
	else 
	printf("Number not found");
	


return 0;
}
