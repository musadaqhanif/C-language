#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main(){
    int max1,max2,max3;
    srand(time(0));
    int x1=rand()%100+1;
    int x2=rand()%100+1;
    int x3=rand()%100+1;
    printf("Numbers before condition :%d %d %d  \n",x1,x2,x3);
    max1=x1;
    max2=x2;
    max3=x3;

    if (x1<x2 && x1<x3 && x2<x3)
    { 
         max1=x1;   
         max2=x2;
         max3=x3;
        printf("Numbers after condition :");
        printf("%d %d %d",max1,max2,max3);
    }
     else  if (x1>x2 && x1<x3 && x2<x3)
    { 
         max1=x2;   
         max2=x1;
         max3=x3;
        printf("Numbers after condition :");
        printf("%d %d %d",max1,max2,max3);
    }
     else if (x1>x2 && x1>x3 && x2>x3)
    {
          max1=x3;   
          max2=x2;
          max3=x1;
        printf("Numbers after condition :");
        printf("%d %d %d",max1,max2,max3);
    }
     else if (x1>x2 && x1>x3 && x2<x3)
    {
          max1=x2;   
          max2=x3;
          max3=x1;
        printf("Numbers after condition :");
        printf("%d %d %d",max1,max2,max3);
    }
     else if (x1<x2 && x1<x3 && x2>x3)
    {
          max1=x1;   
          max2=x3;
          max3=x2;
        printf("Numbers after condition :");
        printf("%d %d %d",max1,max2,max3);
    }
   else if (x1<x2 && x1>x3 && x2>x3)
    {
          max1=x3;   
          max2=x1;
          max3=x2;
        printf("Numbers after condition :");
        printf("%d %d %d",max1,max2,max3);   } 
  return 0;
}
