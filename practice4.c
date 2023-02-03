#include "stdio.h"
#include "stdlib.h"
#include "string.h"
int main()
{
    int a,b;
    printf("Enter two value\n");
    scanf("%d %d",&a,&b);
    if(a>0 && b<0)
    {
        printf("sign is negative");
    }
    else if (a>0&&b>0)
    {
        printf("sign is positive");
    }
    else if (a==0)
    {
        printf("Our Ansver is 0 because of that there is no sign");
    }
    else if (b==0)
    {
        printf("Our Ansver is 0 because of that there is no sign");
        
    }
    else if (a<0&&b<0)
    {
        printf("sign is positive");
        
    }
    else if (a<0&&b>0)
    {
        printf("sign is negative");
        
    }
    
    
}
