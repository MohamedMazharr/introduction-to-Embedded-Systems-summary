#include <stdio.h>

int main()
{
	int num,result ;
	
	printf("enter number:");
	scanf("%d",&num);
	
	result= num & 1 ;
	
	printf("number is set or not:%d",result);
	
	
}