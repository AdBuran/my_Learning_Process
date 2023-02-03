#include "stdio.h"
#include "stdlib.h"
#include "math.h"
float function(float y)
{
float t;
t=y*y*y+13*y*y+47*y+5;
return t;
}
int main()
{
    int a;
    float x;
    printf("x^3+13x^2+47x+5\n\tEnter a value for x.\n");
    
    scanf("%f",&x);
    float f;
    f=function(x);
    printf("f(%.2f)=%.3f",x,f);
}
