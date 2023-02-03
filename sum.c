#include "stdio.h"
#include "stdlib.h"
int main()
{
    // (a*(a+1))/2
    printf(" Enter a value\n");
    int a,i=1,r=0;
    scanf("%d",&a);

    while(i<=a)
    {
        if(i==a){ printf("%d = ",i);}
        else if (i!=a){printf(" %d +",i);}
        
        r=r+i;
        i++;
    }
    printf("%d",r);
}
