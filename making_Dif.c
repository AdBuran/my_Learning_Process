// #include "stdio.h"
// #include "stdlib.h"
// int main()
// {
//     int thirdD [3][5] ; // a array and two variable
// printf("Enter your  numbers\n");
// int l=0,oop;
// while(l<2){
//     oop=0; // biggest reason
//     while(oop<5){
//     scanf("%d",&thirdD[l][oop]);
//     oop++;
//     }
//     l++;
// }
// l=0,
// oop=0;
// while(l<1){
//     while(oop<5){
//    thirdD[2][oop] = thirdD[l+1][oop]+thirdD[l][oop];
//     oop++;
//     }
//     l++;
// }

// oop=0;

// while(oop<5){
// printf("totals :%d\n",thirdD[2][oop]);
// oop++;
// }

// return 0 ;
// }
//  using for is more fun
#include "stdio.h"
#include "stdlib.h"
int main(){
    int tdimen [3][5];
    int lo,op;
    printf("Enter your numbers\n");
    for(lo=0;lo<4;lo++){
        for(op=0;op<5;op++){
            if(lo==2||lo==3){continue;}
            

            scanf("%d",&tdimen[lo][op]);
        }
        if(lo==2){

        lo=0;
        for(op=0;op<5;op++){
            tdimen[2][op] = tdimen[lo+1][op]+tdimen[lo][op];
            
        }
        lo=2;
        }
        if(lo==3){
            for(op=0;op<5;op++){
                printf("%d.Total : %d\n",op+1,tdimen[2][op]);

            }
        }
    }
    return 0;
}
