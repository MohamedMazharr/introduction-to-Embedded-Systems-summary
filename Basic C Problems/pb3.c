#include <stdio.h>

int main()
{
    int num1, num2,sum, sub, mult, mod;
    float division;

    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);
 
    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    division = (float)num1 / num2;
    mod = num1 % num2;
    printf("SUM = %d\n", sum);
    printf("DIFFERENCE = %d\n", sub);
    printf("PRODUCT = %d\n", mult);
    printf("QUOTIENT = %f\n", division);
    printf("MODULUS = %d", mod);

    return 0; 
}