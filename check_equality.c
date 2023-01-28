#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main(){
    int f;
    srand(time(0));
    int num1=rand()%5+1;
    int num2=rand()%5+1;
    f=abs(num1-num2);
    if (f<=1){
        printf("%d\n",num1);
        printf("%d\n",num2);
        printf("Numbers almost are equal");
    }
    else{
        printf("%d\n",num1);
        printf("%d\n",num2);
        printf("Numbers are not equal");
    }
    return 0;

}
