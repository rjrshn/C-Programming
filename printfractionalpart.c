#include<stdio.h>
int main()
{
    float x;
    printf("Enter a Decimal Number: ");
    scanf("%f ",&x);
    int y = x;
    float z = x-y;
    printf("The Fractional Part is: %f",z);
    return 0;
}