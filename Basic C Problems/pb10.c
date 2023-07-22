#include <stdio.h>

int main()
{
	float days ;
	float weeks ;
	float years ;
	printf("Enter days:");
	scanf("%f",&days);
	 
	 years= days / 365.0 ;
	 weeks= days / 7.0 ;
	 
	 printf("%fDays to Years:%f\n",days,years);
	  printf("%fDays to Weeks:%f",days,weeks);
}