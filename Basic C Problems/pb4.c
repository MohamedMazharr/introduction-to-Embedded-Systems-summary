#include <stdio.h>

int main()
{
	int length ;
	int width ;
	int perimeter ;
	printf("Enter length:");
	scanf("%d",&length);
	
	printf("Enter width:");
	scanf("%d",&width);
	
	perimeter= 2 * ( length + width );
	 
	 printf("PERIMETER=%d",perimeter);
}