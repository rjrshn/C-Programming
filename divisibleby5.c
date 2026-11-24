#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Possitive Integer: ");
    scanf("%d", &a);
 
    if(a%5==0){
        printf("Number Is Divisible By 5");
    }
    else{
        printf("No, The number is not divisible by 5");
    }
}