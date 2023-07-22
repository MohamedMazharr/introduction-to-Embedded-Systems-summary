#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int msb_position = sizeof(num) * 8 - 1;
    int msb_value = 1 << msb_position; 

    int msb = (num & msb_value); 

    printf("The Most Significant Bit of %d is %d.\n", num, msb);

    return 0;
}