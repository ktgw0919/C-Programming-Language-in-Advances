#include<stdio.h>

float max_3(float a, float b, float c){
    if(a>=b && a>=c)return a;
    if(b>=c && b>=a)return b;
    if(c>=a && c>=b)return c;
}

int main(void){
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    printf("%f\n",max_3(a,b,c));

    return 0;
}
