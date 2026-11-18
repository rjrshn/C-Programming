#include<stdio.h>
int main()
{
    float x = 5.1;
    float y = 3.9;
    float z = 9.0;
    float a = x + y / z;
    printf("%f""\n",x + y);
    printf("%f""\n",x - y);
    printf("%f""\n",x * y);
    printf("%f""\n",x / y);
    printf("%f""\n",x + y + z - a);
    printf("%f""\n",x - y + z + a);
    printf("%f""\n",x + y - z - a);
    printf("%f""\n",x * y * z * a);
    return 0;
}