#include<stdio.h>


int main(void){
    float a,b,c;
    float max;
    scanf("%f%f%f",&a,&b,&c);
    if(a>b)max=a;
    else max=b;

    if(max<c)max=c;

    printf("%f",max);

    return 0;
}