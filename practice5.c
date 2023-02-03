#include "stdio.h"
#include "stdlib.h"
#include "math.h"
int main   ()
{
    int a,b,c;
    printf("Decide a upper limit\n");
    scanf("%d",&a);
    b=0;
    c=0;
    while(b<=a)
    {

        if(b%17==0)
        {
            printf("%5d",b);
            c++;
            if(c==10)
            {
                printf("\n");
                c=0;
            }
            
        }
        b++;
    }
}
