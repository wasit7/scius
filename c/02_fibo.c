#include<stdio.h>
int main(void){
    int a=1,b=1,c;
    for(;a<100;){
        printf("%3d\n",a);
        c=a+b;
        a=b;
        b=c;

    }
}




