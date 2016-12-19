#include<stdio.h>
int main(void){
    int a=1,b=1,c;
    while(1){

        if(a>1000000)
            break;
        printf("%7d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
    printf("\nGolden Ratio is %.10f\n",(float)b/(float)a);
}




