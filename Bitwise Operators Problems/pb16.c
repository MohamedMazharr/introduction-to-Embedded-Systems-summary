#include <stdio.h>

int main()
{
	int num;
	printf("enter num:");
	scanf("%d",&num);
	if (num & 1) 
	{
        printf("%d is odd.\n", num);
    } 
	else 
	{
        printf("%d is even.\n", num);
    }

	
	
}