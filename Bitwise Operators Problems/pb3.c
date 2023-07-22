#include <stdio.h>

int main()
{
	
	int num,bitnum,result;
	
	printf("enter number:");
	scanf("%d",&num);
	
	printf("enter bitnum:");
	scanf("%d",&bitnum);
	
	result= (num>>bitnum) & 1;
	
	printf("THE VALUE OF THIS BIT:%d",result);
	
	
	return 0;
}


