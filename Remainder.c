#include<stdio.h>
int main ()
{
   int a,b,q,r;
   printf("Enter First No: ");
   scanf("%d",&a);
    printf("Enter Second No: ");
    scanf("%d", &b);
    r = a%b ;
    printf("Remainder:%d", r);

    return 0;
}