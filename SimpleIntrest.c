#include<stdio.h>
int main(){
    float p, r, t, SI;
    printf("Enter Principle Amount:");
    scanf("%f", &p);
    printf("Enter Rate Of Intrest :");
    scanf("%f", &r);
    printf("Enter Time Period in years:");
    scanf("%f", &t);
    SI = (p*r*t)/100; 
    printf("Simple Intrest = %f",SI);
    return 0;
}