#include <stdio.h>

int main()
{
	int num,bitnum,result;
	printf("enter the value of num:");
	scanf("%d",&num);
	printf("enter the bitnum to set:":);
	scanf("%d",&bitnum);
	
	result= num | (1<<bitnum);
	
	printf("%d",result);
	
	
	
}