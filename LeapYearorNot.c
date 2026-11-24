#include<stdio.h>
int main()
{
    int y;
    printf("Enter the year to check whether it is a leap year or not : ");
    scanf("%d", &y);
    
    if(y%400 ==0){
        printf("Leap Year");
    }
    else{
        printf("Non- Leap Year");
    }
    return 0;
}