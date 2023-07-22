#include <stdio.h>

int main()
{
	float mark1,mark2,mark3,mark4,mark5,total,average,percentage;
	printf("Enter marks of five subjects:");
	scanf("%f%f%f%f%f",&mark1,&mark2,&mark3,&mark4,&mark5);
	
	total=mark1+mark2+mark3+mark4+mark5;
	
    average= total / 5.0 ;
	
	percentage= average * (100 / 100) ;
	
	printf("total:%f\naverage:%f\npercentage:%f",total,average,percentage);
	
	
	
	
	
}