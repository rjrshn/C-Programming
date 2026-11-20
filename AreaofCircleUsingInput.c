#include<stdio.h>
int main(){
    float radius;
    printf("Enter radius : ");
    scanf("%f", &radius);
    float pi = 3.1415;
    printf("Area of Circle = %f", pi * radius * radius );
    return 0;
}