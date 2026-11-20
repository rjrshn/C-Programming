#include<stdio.h>
int main()
{
    float m1 = 33; // marks obtained out of 40 in Subject 1
    float m2 = 39; // marks obtained out of 40 in Subject 2
    float m3 = 37; // marks obtained out of 40 in Subject 3
    float m4 = 35; // marks obtained out of 40 in Subject 4
    float p =(( m1 + m2 + m3 + m4)*100)/160;
    printf("Percentage obtained = %f",p);
    return 0;
}