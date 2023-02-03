
/*
#include "stdio.h"
#include "stdlib.h"
int main()
{
    int a,b,c;
    printf("Enter 3 difirent Number\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            if(c>b)
            {
                printf("Greatest number is :%d\nMost minor number is :%d\n",a,b);
            }
            else if (b>c)
            {
                printf("Greatest number is :%d\nMost minor number is :%d\n",a,c);
                
            }
            
        }
        else if (c>a)
        {
                printf("Greatest number is :%d\nMost minor number is :%d\n",c,b);
            
        }
        
    }
    else if (b>a)
    {
        
        if(b>c)
        {
            if(c>a)
            {
                printf("Greatest number is :%d\nMost minor number is :%d\n",b,a);
            }
            else if (a>c)
            {
                printf("Greatest number is :%d\nMost minor number is :%d\n",b,c);
                
            }
            
        }
        else if (c>b)
        {
                printf("Greatest number is :%d\nMost minor number is :%d\n",c,a);
            
        }
        
    }
    return 0;
}
*/


#include "stdio.h"
#include "stdlib.h"
int main()
{
    int a,b,c;
        int max,min;
    printf("Enter 3 different number\n");
    scanf("%d %d %d",&a,&b,&c);
        max =a;
    if (b>max)
    {
        max=b;
    }
    if(c>max)
    {
        max=c;
    }
    printf("Greatest number is %d\n",max);
        min=a;
    if(b<min)
    {
        min=b;
    }
    if(c<min)
    {
        min=c;
    }
    printf("Smallest number is %d\n",min);


    return 0;
}
