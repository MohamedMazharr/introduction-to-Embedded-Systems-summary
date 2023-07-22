#include <stdio.h>

int main()
{
	int num,bitnum,result;
	
	printf("enter number:");
	scanf("%d",&num);
	
	printf("enter bitnum to toggle:");
	scanf("%d",&bitnum);
	
	result= num ^ (1<<bitnum);
	
	
	printf("THE NEW VALUE:%d",result);
	
	return 0;
	
	
	
}	